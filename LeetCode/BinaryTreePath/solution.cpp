#include <iostream>
#include <vector>
using namespace std;
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    // use the depth first to traversal the tree
    void dfs(TreeNode* root,string val,vector<string>&resultList){
    if (root == NULL){ return;}
    if(root->left == NULL && root->right == NULL){
        resultList.push_back(val);
        return;
    }
    TreeNode* leftTree = root->left;
    TreeNode* rightTree = root->right;
    if(leftTree){dfs(leftTree,val + "->" +to_string( leftTree->val),resultList);}
    if(rightTree){dfs(rightTree,val + "->" +to_string(rightTree->val),resultList);}
}
vector<string> binaryTreePaths(TreeNode* root) {
    vector<string> resultList;
    if(root == NULL){ return resultList;}
    
    dfs(root,to_string(root->val),resultList);
    return  resultList;
}
};
int main(){

   return 1;
}
