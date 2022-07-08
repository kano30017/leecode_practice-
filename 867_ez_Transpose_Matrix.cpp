#include <iostream>
#include <vector>

using namespace std;


class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        int r = matrix.size();
        int c = matrix[0].size();
        vector<vector <int>> ans(c, vector<int>(r));
        for (int i = 0; i < c; i++){
            for (int j = 0; j < r ; j++){
                ans[i][j] = matrix[j][i];
            }
        }
        return ans;
    }
};


int main(){
    Solution ans;
    vector <vector<int>> vec = {{}};
    vector <vector <int>> gg = ans.transpose(vec);
    for(int i = 0 ; i < gg.size(); i ++){
        for (int j=0; j< gg[0].size(); j++){
            cout << gg[i][j] << ',';
        }
        cout << endl;
    }
    // cout <<vec.size() << vec[0].size();
    return 0;
}