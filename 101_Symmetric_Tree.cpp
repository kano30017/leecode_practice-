/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    bool helper(TreeNode* left, TreeNode* right){
        if(left == NULL && right == NULL ) return true;
        if(left == NULL || right == NULL ) return false;
        if (left->val != right ->val ) return false;
        else return helper(left-> right, right -> left) && helper(left -> left , right -> right);
    }
    bool isSymmetric(TreeNode* root) {
        while(!root) return true;
        TreeNode *l = root -> left;
        TreeNode *r = root -> right;
        return helper(l, r);
    }  
};