#include <iostream>
#include <map>
#include <vector>
using namespace std;
int kthSmallest(vector<vector<int>>& matrix, int k) {
        if (k == 1) { return matrix[0][0]; }
        map<int,int> resultList;
        for (int i = 0; i < matrix.size(); i++) {
            for (int j = 0; j < matrix[i].size(); j++){
                if (resultList.find(matrix[i][j]) != resultList.end()) {
                    resultList.find(matrix[i][j])->second += 1;// use the count of element and the value of element Compose a pair_value
                }
                else {
                    resultList.insert(pair <int,int> (matrix[i][j],1));
                }
            }
        }
        int value = 0;
        for (auto &tmp : resultList) {
            k -= tmp.second;
            if (k <= 0) {
                value = tmp.first;
                break;
            }
        }
        return value;
    }
    void main(){
      vector<vector<int>> testList={{1,5,9},{10,11,23},{12,23,34}};
      cout<<kthSmallest(testList,3)<<endl;
    }
