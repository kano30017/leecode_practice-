#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        if(nums.size() == 0 ) return 0;
        int cur = 0 ;
        int res;
        for(int i = 0; i < nums.size(); i++){
            cur += nums[i];
            if(cur < 0 || nums[i] > cur){
                cur = nums[i];
            }
            if (res < cur){
                res = cur;
            }
            // cur = max(0, cur + nums[i]);
            // res = max(cur, nums[i]);
        }
        return res;
    }
};

int main(){
    Solution ans;
    vector<int> nums = {5,4,-1,7,8};
    cout << ans.maxSubArray(nums) << endl;
}