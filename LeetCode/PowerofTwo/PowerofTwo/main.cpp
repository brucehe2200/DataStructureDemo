//
//  main.cpp
//  PowerofTwo
//
//  Created by 何淋淋 on 16/1/23.
//  Copyright © 2016年 何淋淋. All rights reserved.
//

#include <iostream>
#include <math.h>
using namespace std;
bool isPowerOfTwo(int n)
{
    if (n < 3&&n > 0) {
        cout<<"true"<<endl;
        return  true;
    }
    if (fmod(log2(n), 1) == 0.0) {
        // 通过对概述开方运算之后再乘以2是否仍旧该数来判断
        cout<<"true"<<endl;
        return true;
    }
    return false;
}

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    isPowerOfTwo(15);
    return 0;
}
