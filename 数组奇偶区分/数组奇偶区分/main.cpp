//
//  main.cpp
//  数组奇偶区分
//
//  Created by 何淋淋 on 16/6/4.
//  Copyright © 2016年 何淋淋. All rights reserved.
//

#include <iostream>
#include <stdio.h>
using namespace std;
//  对数组中的奇数和偶数进行分类
//  采用冒泡排序的方式进行分离
void arraysequence(int a[],int arraylenght)
{
    int key = a[0];
    for (int i = 0; i < arraylenght; i++) {
        key = a[i];
        for (int j = i+1; j < arraylenght; j++) {
            if (a[i]%2!=0&&a[j]%2==0) {
                a[i] = a[j];
                a[j] = key;
                break;
            }
        }
    }
    for (int i = 0; i < arraylenght; i++) {
        cout<<a[i]<<endl;
    }
}
// 采用快速排序的方式进行奇偶数分离
void quicksortsequence(int a[],int start,int end)
{
    int low = start;
    int high = end;
    //int key = a[high];
    int temp = 0;
    if (start >= end) {
        return;
    }
    while (low < high) {
        while (a[low] % 2 ==0 && high > low) {
            low++;
           }
        while(a[high]%2 != 0 && low < high) {
            high--;
        }
        if (low < high) {
            temp = a[low];
            a[low] = a[high];
            a[high] = temp;
        }
    }
    quicksortsequence(a, 0, low - 1);
    quicksortsequence(a,low +1, high);
}
int main(int argc, const char * argv[]) {
    // insert code here...
    //std::cout << "Hello, World!\n";
    int a[7]={1,3,4,2,6,7,9};
   // arraysequence(a, 7);
    quicksortsequence(a,0,6);
    for (int i = 0; i< 7; i++) {
        cout<<a[i]<<endl;
    }
    return 0;
}
