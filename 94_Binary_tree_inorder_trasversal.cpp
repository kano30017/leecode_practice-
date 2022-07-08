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
#include <iostream>
#include <vector>
#include <queue>
class TreeNode{
public:
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr){};
    TreeNode(int x ) : val(x), left(nullptr), right(nullptr){};
    TreeNode(int x, TreeNode*left, TreeNode *right ) : val(x), left(left), right(right){};
    
};
class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        while (root == NULL) return;
        TreeNode* cur ;
        
        while(cur!=NULL && cur !=root ){
            cur = root;
            
        }
        
    }
};

int main(){
    Solution ans;
    TreeNode* node;
    ans.inorderTraversal(node);    
    return 0;
}