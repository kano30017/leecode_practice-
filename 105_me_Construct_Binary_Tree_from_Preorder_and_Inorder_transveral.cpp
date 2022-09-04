#include <iostream>
#include <vector>
#include <queue>

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
 struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};
// level transversal 
vector<vector<int>> levelOrder(TreeNode* root) {
    if (!root) return {};
    vector<vector<int>> ans;
    queue<TreeNode*> q;
    q.push(root);
    while(!q.empty()){
        int levelsize = q.size();
        vector<int> levelresult ;
        for (int i = 0 ; i <  levelsize; i++){
            TreeNode* top = q.front(); // pick up the level element
            levelresult.push_back( top-> val); // insert to level reslt
            q.pop(); // remove the picked element
            if(top -> left) q.push(top-> left);
            if(top -> right) q.push(top -> right);
        }   
        ans.push_back(levelresult);
    }
    return ans;
}

/* Easier method O(T) = N^2, O(S) = N
class Solution {
public:
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        int idx = 0;
        return helper(preorder, inorder, idx, 0, inorder.size() - 1);
    }

private:
    TreeNode* helper(vector<int>& preorder, vector<int>& inorder,  int& index ,int l, int r){
        while( l  > r) return NULL; // for the last leaf

        //find out the root element from preorder to inorder 
        int root = l;
        while(inorder[root] != preorder[index] ) root++;
        //After find out the center, create node for this element
        TreeNode *newNode = new TreeNode(inorder[root]);
        cout << "Root value :" << inorder[root] << endl;
        index++; // search the next element in inorder until finishing transversal
        newNode -> left = helper(preorder, inorder, index, l,root - 1); // left node should search from  inorder[0] to inorder[index-1]
        newNode -> right = helper(preorder, inorder, index, root +1 , r ); // left node should search from  inorder[0] to inorder[size -1]
        return newNode;
    }
};
*/
class Solution {
public:
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        map<int,int> m; 
        // create map table that preorder[i] => i
        for(int i = 0; i < preorder.size();i++) m[inorder[i]] = i;
        return helper(preorder, 0, preorder.size() - 1, inorder, 0, inorder.size() - 1, map)
    }
private:
    TreeNode* helper(vector<int> & preorder,int preBegin,int preEnd, vector<int> & inorder,int inBegin,int inEnd, map<int,int> mapper){
        TreeNode* root = new TreeNode(preorder[preBegin]);
        int 
    }
};
int main(){
    vector<int> preOrder = {3,9,20,15,7};
    vector<int> inOrder = {9,3,15,20,7};
    Solution ans;
    TreeNode* result = ans.buildTree(preOrder, inOrder);
    vector<vector<int>> pp = levelOrder(result);
    for (auto i : pp){
        for (auto j : i){
            cout << j << " ";
        }
        cout << endl;
    }
    
}