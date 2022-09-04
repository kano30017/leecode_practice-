#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;
class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        if (nums.size() < 2 ) return 0;
        int ans = 0 ;
        for (int i = 0 ; i < nums.size(); i++)
        {
            for ( int j = i + 1 ; j < nums.size(); j++){
                if (nums[i] == nums[j]) ans++;
            }
        }
        return ans;
        // //  another
        // unordered_map <int,int> table;
        // int res = 0;
        // for (int i = 0; i < nums.size() ; i++)
        // {
        //     if(table[nums[i]])
        //     {
        //         res += table[nums[i]];
        //     }
        //     table[nums[i]]++;
        // }
        // return res;
    }
};

int main(){
    Solution ans;
    vector<int> nums = {1,1,1,1};
    int res = ans.numIdenticalPairs(nums);
    cout << res;
    return 0 ;
}