#include <iostream>
#include <vector>
#include <queue>

using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {};
    TreeNode(int x): val(x), left(nullptr), right(nullptr) {};
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}  
}

class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
    if (!root) return 0;
    vector<vector<int>> {};
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
};


int main()
{
    TreeNode * a(3);
    TreeNode * b(5);
    TreeNode *
}