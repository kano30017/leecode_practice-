#include <iostream>
#include <vector>
#include <set>

using namespace std;

class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int res = 0;
        int l = 0;
        int r = nums.size() -1;
        for(int val: nums) res*= val;
        while( l < r){
            if(nums[l] * nums[r] > 0){
                if(res > 0)
            }
        }
        return res;
    }
        // brute force
        // set<int> ans;
        // int total = nums.size();
        // for( int i = 0; i < total ; i++){
        //     int tem = nums[i];
        //     ans.insert(tem);
        //     for(int j = i+1 ; j < total ; j++){
        //         tem *= nums[j];
        //         ans.insert(tem); 
        //     }
        // }
        // return *ans.end();
};

int main(){
    Solution ans;
    vector<int> nums = {-3,2,0, 1,2,3,4};
    ans.maxProduct(nums);
    // cout << ans.maxProduct(nums) << endl;
}