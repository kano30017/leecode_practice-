#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        if(intervals.size()  <2) return intervals;
        sort(intervals.begin(), intervals.end(),\
        [](const vector<int> & i, const vector<int> & j) {return i[0] < j[0];});
        vector<vector<int>> ans;
        ans.push_back(intervals[0]);
        for( int i = 0; i < intervals.size(); i++){
            if(ans.back()[1] < intervals[i][0]){
                ans.push_back(intervals[i]);
            }
            else{
                ans.back()[1] = max(ans.back()[1], intervals[i][1]);
            }
        }
        return ans;
    }
};


int main(){
    vector<vector<int>> arr = {{1,3}, {2,4}, {4,5}, {7,9}};
    Solution ans;
    vector<vector<int>> res = ans.merge(arr);
    for( auto i : res){
        for( auto j : i){
            cout << j << " ";
        }
        cout << endl;
    }

}




