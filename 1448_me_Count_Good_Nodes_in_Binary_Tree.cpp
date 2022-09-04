#include <iostream>
#include <vector>
#include "structure.h"

using namespace std;


class Solution {
    /* DFS pre-order 
public:
    int good = 0;
    void helper(TreeNode* root, int maxval){
        if(!root) return;
        if(root -> val >= maxval){
            maxval = root -> val;
            good++;
        }
        helper(root -> left, maxval);
        helper(root -> right, maxval);
    }
    int goodNodes(TreeNode* root) {
        helper(root, INT_MIN);
        return good;
    }
    */
   // recursion with DFS algo 
public:
    int goodNodes(TreeNode* root, int maxval = -10001){
        if (!root) return 0;
        if (cur -> val >= maxval)
            return 1 + goodNodes(root->left, max(root->val , maxval)) + goodNodes(root->right, max(root->val , maxval));
        else 
            return goodNodes(root->left, max(root->val , maxval)) + goodNodes(root->right, max(root->val , maxval));
    }
};

