#include <iostream>
#include <vector>
using namespace std;


class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> ans(nums.size());
        int l = 0, r = nums.size() - 1;
        int i = r ;
        while(l <= r){
            if(nums[l] * nums[l] < nums[r] * nums[r]){
                ans[i--] = nums[r] *nums[r];
                r--;
            }
            else {
                ans[i--] =  nums[l] *nums[l];
                l++;
            }
        }
        return ans;
    }
};

int main(){
    Solution ans;
    vector<int> nums = {-7,-3,2,0, 3,11};
    for(int val : ans.sortedSquares(nums)) cout << val  << ", ";

}