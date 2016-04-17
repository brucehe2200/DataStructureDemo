//
//  main.cpp
//  栈最小值
//
//  Created by 何淋淋 on 16/4/10.
//  Copyright © 2016年 何淋淋. All rights reserved.
//

#include <iostream>
#include <assert.h>
#include <deque>
using namespace std;

#define MAX_SIZE 100
template<typename T>//考虑到数据的多样性，采用模版
class DataStack {
    T dataList[MAX_SIZE];
    T minList[MAX_SIZE];
    int top;//栈顶标记
    
public:
    DataStack(){top = -1;}
    void Push(T &value);
    T Pop();
    T GetMin();
};

template<typename T>
void DataStack<T>::Push(T &value){
    top++;
    dataList[top] = value;
    if (top == 0) {
        minList[top] = value;
    }
    else{
        if (value < minList[top-1]) {
            minList[top] = value;
        }
        else{
            minList[top] = minList[top - 1];
        }
    }
};
template<typename T>
T DataStack<T>::Pop(){
    minList[top] = 0;
    return dataList[top--];
}
template <typename T>
T DataStack<T>::GetMin(){
    return minList[top];
}

int main(int argc, const char * argv[]) {
    // insert code here...
    DataStack<int> dataList;
    int temp=9;
    dataList.Push(temp);
    temp = 8;
    dataList.Push(temp);
    temp = 13;
    dataList.Push(temp);
    temp = 35;
    dataList.Push(temp);
    
    cout<<dataList.GetMin()<<endl;
    dataList.Pop();
    cout<<dataList.GetMin()<<endl;
    dataList.Pop();
    cout<<dataList.GetMin()<<endl;
    dataList.Pop();
    cout<<dataList.GetMin()<<endl;
    dataList.Pop();
      return 0;
}
