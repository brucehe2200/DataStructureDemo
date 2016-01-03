//
//  main.cpp
//  shellSort
//
//  Created by 何淋淋 on 16/1/3.
//  Copyright © 2016年 何淋淋. All rights reserved.
//

#include <iostream>
using namespace std;
void swap(int *a,int *b)
{
    int temp = *a;
    *a =*b;
    *b = temp;
}
void shellSort(int a[],int m)
{
    // 此处以整型数据为例，进行排序,并设置的排序增量为5，3，2,1
    int temp[4]={5,3,2,1};
    for (int i = 0; i < 4;i++) {
        for (int j = 0;j < m; j++) {
            int key = a[j];
            for(int k = j;k >= 0; k  = k - temp[i]) {
                if (key < a[k]) {// 局部仍旧调用插入排序
                    swap(&a[k], &a[k + temp[i]]);
                }
            }
        }
    }
}

int main(int argc, const char * argv[]) {
    // insert code here...
    int a[13]={78,5,89,7,9,2,3,6,8,23,45,12,1};
    shellSort(a, 13);
    for (int i = 0; i < 13; i++) {
        cout<<a[i]<<endl;
    }
    std::cout << "Hello, World!\n";
    return 0;
}
