#include <iostream>
#include <set>
#include <vector>
using namespace std;
class Solution {
public:
    vector<string> findWords(vector<string>& words) {
        // use the hash table, map the word with the list of words row
        unordered_set<char> row1 = { 'q', 'w', 'e', 'r', 't', 'y','u', 'i', 'o', 'p' };
        unordered_set<char> row2 = { 'a', 's', 'd', 'f', 'g', 'h', 'j', 'k', 'l' };
        unordered_set<char> row3 = { 'z', 'x', 'c', 'v', 'b' ,'n', 'm' };
        vector<string> resultList;
        vector<unordered_set<char>> rowList = { row1,row2,row3 };
        for (int k = 0; k < rowList.size(); k++) {
            for (int i = 0; i < words.size(); i++) {
                int count = 0;
                for (int j = 0; j < words[i].size(); j++) {
                    if (rowList[k].count(tolower(words[i][j])) == 0) {
                        continue;
                    }
                    count++;
                    if (count == words[i].size()) {
                        resultList.push_back(words[i]);
                    }
    
                }
            }
        }
    
        return resultList;
    }
};
int main(){
  vector<string> testList = {"hello","Alaska","Dad","peace"};
  vector<string> result = findWords(testList);
  return 1;
}
