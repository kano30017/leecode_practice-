#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        // sum up than substract
        // int len = nums.size();
        // int sum = (len +1) * (len) >> 1;
        // for(int i = 0; i< len; i++){
        //     sum -= nums[i];
        // }
        int result = nums.size();
        int i = 0;
        for (int num:nums){
            result ^= num;
            result ^=  i;
            i++;
        }
        return result;
    }
};

int main(){
    Solution ans;
    vector <int> nums({9,6,4,2,3,5,7,0,1});
    cout << ans.missingNumber(nums) << endl;
    return 0 ;
}