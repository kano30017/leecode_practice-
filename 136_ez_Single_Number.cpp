#include <iostream>
#include <vector>

using namespace std;


class Solution {
public:
    int singleNumber(vector<int>& nums) {
        if(nums.size() == 1) return nums[0];
        int ans = 0;
        for (int val : nums){
            ans ^= val;
        }
        return ans;
    }
};


int main(){
    Solution ans;
    vector<int> nums = {1,1,2,3,3,4,1,1,4};
    cout << ans.singleNumber(nums) << endl;
    return 0;
}