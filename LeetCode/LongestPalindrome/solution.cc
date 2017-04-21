#include <iostream>
using namespace std;

/**
in the solution, i just set s[i] as the middle item in the Palidrome string, then judge the left item and the right item to
ensure the item wheath is the middle item.
**/
string longestPalindrome(string s) {
  string substring;
  string longsubstring;
  longsubstring = s[0];
  if (s.size() <= 2) {
      return s;
  }
  int max_len = s.size();
  for (int i = 0; i < max_len; i++) {
        int setoff = 0;
        substring.clear();
        if (s[i] == s[i + 1]) {// the i is the left middle, in addition, the right middle have the same effect with left middle
            while ((i - setoff) >= 0 && (i + 1 + setoff) < max_len && s[i - setoff] == s[i + 1 + setoff]) {
                setoff++;
            }
            substring = s.substr(i-setoff + 1,2*(setoff));
        }
        if(s[i - 1] == s[i + 1])
        {
            while ((i - setoff) >= 0 && (i + setoff) < max_len && s[i - setoff] == s[i + setoff]) {// this is the odd string
                substring = s.substr(i - setoff, 2 * setoff +1);
                setoff++;
            }
        }
        longsubstring = substring.size() > longsubstring.size() ? substring : longsubstring;
    }
    return longsubstring;
  }
  
  int main()
{
    string temp = "ccdsdfgfhgjhj";
    longestPalindrome(temp);
    return 0;
}
