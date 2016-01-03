//
//  main.cpp
//  MergeSort
//
//  Created by 何淋淋 on 16/1/3.
//  Copyright © 2016年 何淋淋. All rights reserved.
//

#include <iostream>
using namespace std;
void MergeSort(int a[],int m,int b[],int n,int c[])
{
    int index = 0;
    int i = 0;
    int j = 0;
    while (i < m&&j < n) {// 此处不能使用与判断
            if (a[i]>b[j]) {
                c[index] = b[j];
                j++;
                index++;
            }
            else{
                c[index] = a[i];
                index++;
                i++;
            }
    }
    while (i < m) {
        c[index] = a[i];
        index++;
        i++;
    }
    while (j < n) {
        c[index] = b[j];
        j++;
        index++;
    }
    for (int k = 0;k < m+n; k++) {
        cout<<c[k]<<endl;
    }
}
int main(int argc, const char * argv[]) {
    // insert code here...
    int a[16]={1,3,5,5,6,6,7,8,9,13,23,34,45,56,67,79};
    int b[8]={4,6,7,9,10,13,35,78};
    int c[24];
    MergeSort(a, 16, b, 8,c);
    return 0;
}
