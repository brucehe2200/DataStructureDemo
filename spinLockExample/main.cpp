#include <iostream>
#include <thread>
#include <vector>
#include <atomic>

using namespace std;
class Spinlock{
public:
    void lock(){
        // it just
        while (lck.test_and_set(memory_order_acquire)){}
    }
    void release(){
        lck.clear(memory_order_release);
    }
private:
atomic_flag lck= ATOMIC_FLAG_INIT;
};
static Spinlock lockDemo;
static  int testArray[8] = {0,0,0,0,0,0,0,0};
// we just test the increment
void Increment(int index){
    for (int i = 0; i < 1000000; ++i) {
        lockDemo.lock();
        testArray[index]++;
        lockDemo.release();
    }    
}
/**
 * in the demo, we use the mult thread to test how the spinlock works.
 * */

int main() {
    thread threadList[8];
    for (int i = 0; i < sizeof(threadList)/ sizeof(thread); ++i) {
        threadList[i] = thread([i](){Increment(i);});
    }
    for (auto& threadTemp : threadList) {
        threadTemp.join();
    }
    return testArray[1] + testArray[2] + testArray[3] + testArray[4]+
            testArray[5]+ testArray[6]+ testArray[7]+ testArray[0];
}