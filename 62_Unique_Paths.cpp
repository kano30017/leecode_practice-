#include <iostream>
#include <vector>

using namespace std;


class Solution {
public:
    int uniquePaths(int m, int n) {
        vector<vector<int>> grid(n, vector<int> (m,0));
        for (int i =0 ; i < n; i++) grid[i][0] = 1;
        for (int j =0 ; j < m; j++) grid[0][j] = 1;
        for (int i = 1; i < n ; i++){
            for (int j = 1; j < m ; j++){
                grid[i][j] = max(grid[i][ j - 1] + 1, grid[i][j -1]+ grid[i-1][j]);
            }
        }
        return grid[n-1][m-1];
    }
};



int main(){
    int m  = 2;
    int n = 7;
    Solution ans;
    cout <<  ans.uniquePaths(m,n) << endl;

}