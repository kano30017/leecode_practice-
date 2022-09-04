#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        
    }
};


int main(){
    vector<vector<int>> arr = {{1,3}, {2,4}, {4,5}, {7,9}};
    vector<int> insarr = {5,12};
    Solution ans;
    vector<vector<int>> res = ans.merge(arr, insarr);
    for( auto i : res){
        for( auto j : i){
            cout << j << " ";
        }
        cout << endl;
    }

}