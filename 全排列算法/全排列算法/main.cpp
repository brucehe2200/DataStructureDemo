//
//  main.cpp
//  全排列算法
//
//  Created by 何淋淋 on 16/4/17.
//  Copyright © 2016年 何淋淋. All rights reserved.
//

#include <iostream>
using namespace std;
/* 全排列算法的主要思想就在于数学中的计算全排列的公式 m! = m*(m-1)!.
 利用这个思想，就能对所有的排列组合进行排序了*/

void swapTemp(int &a,int &b){
    int m = a;
    a = b;
    b = m;
}
/*
 length 为全数组的长度
 index 要输出的排列起始位置
 */
void permutation(int a[],int index,int length){
    if (index == length) {
        for (int i = 0; i < length; i++) {// 已经无法进行替换，故而输出一个序列
            cout<<a[i];
        }
        cout<<endl;
    }
    else{
        for (int i = index; i < length; i++) {
            swapTemp(a[index], a[i]);// 进行替换之后，总共计算length组子序列
            permutation(a, index + 1, length);// 排列a[index+1]到a[length]之间的序列
            swapTemp(a[index], a[i]);// 恢复原来数组，便于i+1元素和a[inde]进行替换
        }
    }
}
int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    int a[3] = {1,2,3};
    permutation(a, 0, 3);
    return 0;
}
