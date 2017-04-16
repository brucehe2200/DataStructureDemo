#include <iostream>
#include <thread>
#include <atomic>
/*
 *  this is a demo program that how to use the atomic type to create the thread safe program.
 *  in the file, we have created a atomic_type variable. We have not use the mutex lock to protect
 *  the thread safe.
 * */
using namespace std;

struct AtomicCount{
    std::atomic<int> value;

    void increment(){
        value++;
    }
    void decrement(){
        value--;
    }
    int get(){
        return  value;
    }
};
int main() {
    AtomicCount testAtomic;
    testAtomic.value = 0;
    testAtomic.increment();
    std::thread threadList[10];
    /*
     *  we can find that the atomic type variable is thread safe, and the 10 threads will do its work correctly.
     *  To implement this, we have not use the mutex lock to protect the thread.
     * */
    for (int i = 0; i < 10; ++i) {
        threadList[i] = thread([&testAtomic](){
            for (int j = 0; j < 10; ++j) {
                testAtomic.increment();
            }
        });
    }
    for (auto& tempthread : threadList) {
        tempthread.join();
    }
    cout<<testAtomic.get()<<endl;
    return 0;
}