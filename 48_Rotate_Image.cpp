#include < iostream>
#include <vector>

using namepace std;


class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        mirror(matrix);
        transpose(matrix);
    }
private:
    void reflect(<vector<int>>& matrix) {
        int size = matrix[0].size();
        for(int i = 0; i < size ; ++i){
            for (int j = 0 ; j < size /2 , ++j){
                int tem= matrix[j][i];
                matrix[j][i] = matrix[i][size - j - 1];
                matrix[i][size - n - j - 1] = tem; 
            }
        }
    }
    void transpose(<vector<int>>& matrix) {
        int size = matrix[0].size();
        for (int i = 0 ; i < size; i++){
            for (int j =  i + 1; j < size  ; j++){
                int tem = matrix[j][i];
                matrix[j][i] = matrix[i][j];
                matrix[i][j] = tem; 
            }
        }
    }
};

int main (){
    Solution ans;
    vector<vector<int>> matrix = {{1,2,3}, {4,5,6}, {7,8,9}};
    ans.rotate(matrix);
    for(auto a: matrix){
        for(auto b: a){
            cout << b;
        }
        cout << endl;
    }
}