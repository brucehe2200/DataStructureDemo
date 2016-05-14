//
//  main.cpp
//  test
//
//  Created by 何淋淋 on 16/4/23.
//  Copyright © 2016年 何淋淋. All rights reserved.
//

#include <iostream>
#include <vector>
using namespace std;
#define N 5
// 利用char数组进行两个整数的相加
void sum_add(char a[N],char b[N],char c[N+1])
{
    for (int i = N -1; i >= 0; i--) {
        int temp = a[i] + b[i];
        int temp1 = 0;
        if(i + 1 <= N-1){
            temp1 = (a[i+1] + b[i+1])/10;
        }
        int sum = (int)(temp + temp1)%10;
        c[i+1] =sum;
    }
}
int main(int argc, const char * argv[]) {

    char a[N]={1,2,5,6,7};
    char b[N]={5,7,9,7,3};
    char c[N+1] = {0,0,0,0,0,0};
    sum_add(a, b, c);
    return 0;
}
