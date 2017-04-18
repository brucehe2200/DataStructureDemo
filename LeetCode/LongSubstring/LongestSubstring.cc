#include <iostream>
using namespace std;

int lengthOfLongestSubstring(string s) {
    string temp;
    int maxLen = 0;
    for (int i = 0; i < s.size(); i++) {
        if (temp.find(s[i]) != string::npos) {
            temp = temp.substr(temp.find(s[i]) + 1);
	        }
        temp += s[i];
        maxLen = maxLen >  temp.size() ? maxLen : temp.size();
    }
    return maxLen;
}
int main()
{
   string temp = "aab";
   cout<<lengthOfLongestSubstring(temp)<<endl; 
   return 0;
																			}
