#include <iostream>
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
    int minDepth(TreeNode* root) {
        if(root == NULL){return 0;}
        // in special case, if we just have the left son tree or only have right son tree, the 
        // mindepth of the tree is the whole height of other son tree
        if(root->left == NULL){return 1+minDepth(root->right);}
        if(root->right == NULL){return 1+minDepth(root->left);}
        // the normal case
        return 1 + min(minDepth(root->left),minDepth(root->right));
    }
};
int main(){
  return 1;
}
