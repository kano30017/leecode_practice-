#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int search(vector<int>& nums, int target) {
        int l = 0;
        int r = nums.size() - 1;
        if (target < nums[l] || target >  nums[r]) return -1;
        while(l <= r){
            int mid =  l - (l - r) / 2;
            if (target == nums[mid]){
                return mid;
            }
            if (target < nums[mid]){
                r = mid - 1;
            }
            else{
                l = mid + 1;
            }
        }
        return -1;
    }
};

int main(){
    Solution ans;
    vector<int> nums = {-2,0,3,5};
    int target = 5;
    int gg = ans.search(nums, target);
    cout << gg;
}