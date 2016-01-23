//
//  main.cpp
//  PowerofThree
//
//  Created by 何淋淋 on 16/1/10.
//  Copyright © 2016年 何淋淋. All rights reserved.
//

#include <iostream>
#include <math.h>
//采用迭代的方式来计算一个数是否为3的幂，其中1为3的0次幂

bool isPower(int inputVal)
{
    // 通过对这个数与3进行取对数之后对1求余是否＝＝0来进行判断。
    return fmod(log10(inputVal)/log10(3), 1)==0;
};
int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    std::cout<< isPower(1);
    return 0;
}
