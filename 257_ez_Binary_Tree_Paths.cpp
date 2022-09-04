#include <iostream>
#include <vector>
#include <string>
#include "structure.h"

using namespace std;

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
    vector<string> binaryTreePaths(TreeNode* root) {
        vecotr<string> ans;
        string current = "";
        retrun ans;
    }

private:
    void helper(vector<string> ans,TreeNode* root,bool first){
        while(!root)  return {};
        // check if exist children
        if (!root -> left || !root -> right) {
            if (firstw){
                ans += to_string(rott -> val) + "=> " ;
                
            }
        }
        helper(ans, root -> left, false);
        helper(ans, root -> right, false);
    }
};