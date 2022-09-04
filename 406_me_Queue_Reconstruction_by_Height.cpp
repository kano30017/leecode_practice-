
#include <iostream>
#include <vector>

using namespace std;

class Solution {
    public:
    bool helper(vector<int> &a, vector<int>&b){
            if a[1] > b[1]{ // Check the 2nd elemnt 
                return x[0] < x[1];
            }
            return x[1] < y[1];
    }

    vector<vector<int>> reconstructQueue(vector<vector<int>>& people) {
        // Sort the origin people with asesending by 2dnd position, place larger number in the front
        sort(people.begin(), people.end(), helper);
        vector<vector<int>> ans ;
        for( auto p : pepple){

        while( int i < res.size()){
            if()
        }
        }
        return ans;
    }

}

int main(){
    Solution ans;
    vector<vector<int>> test = {{6,0}, {5,0}, {4,0}, {3,2}, {2,2}, {1,4}};
    vector<vector<int>> result = ans.reconstructQueue(test);
    for(auto gg:result){
        cout << gg[0] << "," << gg[1] << endl;
    }
}