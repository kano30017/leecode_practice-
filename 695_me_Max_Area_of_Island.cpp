#include <iostream>
#include <vector>
#include <map> 
using namespace std;

class Solution {
public:
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int ans = 0;
        int row = grid.size();
        int col = grid[0].size();
        <vector<vector<bool>> visited(row, vector<bool>(col, false) );
        for(int i = 0; i < row; i++){
            for(int j = 0 ; j < col; j++){
                if (!visited[i][j] && grid[i][j] ){
                    int count = 0;
                    int region = area(grid, visited, i, j, count);
                    ans = max(region, ans);
                }
                else{
                    visited[i][j] = true;
                }
            }
        }
        return ans;
    }
private:
int area(vector<vector<int>> & grid, vector<vector<bool>>& visited, int row, int col, int count){
    if (row < 0 || col < 0 || row > grid.size() || col > grid[0].size() ) return 0 ;
    visited[row][col] = true;
    
    return 1 + (grid, visited, row - 1 , c , count )
}
};



int main(){
    Solution ans;
    vector<vector<int>> grid = {{0,0,1,0,0,0,0,1,0,0,0,0,0},{0,0,0,0,0,0,0,1,1,1,0,0,0},{0,1,1,0,1,0,0,0,0,0,0,0,0},{0,1,0,0,1,1,0,0,1,0,1,0,0},{0,1,0,0,1,1,0,0,1,1,1,0,0},{0,0,0,0,0,0,0,0,0,0,1,0,0},{0,0,0,0,0,0,0,1,1,1,0,0,0},{0,0,0,0,0,0,0,1,1,0,0,0,0}};
    int result = ans.maxAreaOfIsland(grid);
    cout << result << endl;

}