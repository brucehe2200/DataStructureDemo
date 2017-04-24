#include <iostream>

using namespace std;
bool isPalindrome(int x) {
    if (x<0 || (x != 0 && x % 10 == 0)) return false;
    int sum = 0;
    int temp = x;
    while (x>0)
    {
        sum = sum * 10 + x % 10;
        x = x / 10;
    }
    return (temp == sum);
}
int main()
{
    cout<<isPalindrome(121)<<endl;
    return 0;
}

