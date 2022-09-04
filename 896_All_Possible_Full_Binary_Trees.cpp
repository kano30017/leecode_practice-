#include <iostream>
#include <vector>
#include <"structure.h">
using namespace std;
class Solution {
public:
    vector<TreeNode*> allPossibleFBT(int n) {
        if (!(n%2)) return {}; // if n is odd , no FBST possibility
        vector<vector<TreeNode*>> ans;
        ans.push_back({new TreeNode(0)});
        if(n == 1 ) return {ans[0]};
        ans.push_back({new TreeNode(0, new TreeNode(0), new TreeNode(0))});
        if(n == 3 ) return {ans[1]};
        
        int level =  (n + 1) /2 ; // (N+1) /2
        for (int i = 2 ; i < n ; i++){ // loop times = 2 to level ( 0, 1 are skipped) and picked level[n] 's result
            vector<TreeNode*> tree;
            for (int  j = 0; j < i; j ++){ // assign child to left and right tree respectively 
                for (auto left : ans[j]){
                    for (auto right : ans[i - j - 1]){
                        TreeNode * tem = new TreeNode(0);
                        tem -> left = left;
                        tem -> right = right;
                        tree.push_back(tem);
                    }
                }
            } 
            ans.push_back(tree);
        }
        return ans[level - 1];
    }
};

int main(){
    solution ans;
    int node = 3
    vector<TreeNode*> res = ans.allPossibleFBT(node);
    for (auto node ,res){
        cout << vector -> val << endl;
    }

}

