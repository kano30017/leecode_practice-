#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;
vector<int>  merge(vector<int> left,vector<int> right){
    vector<int> res;
    while(left.size() && right.size()){
        if (left[0] < right[0]){
            res.push_back(left.begin());
            left.erase(left.begin());
        }
        else{
            res.push_back(right.begin());
            right.erase(right.begin());
        }
    }
    if(left.size()) {
        res.insert(res.end(), right.begin(), right.end());
    }
    else {
        res.insert(res.end(), left.begin(), left.end());
    }
    return res;

}
vector<int> Mergesort(vector<int>& arr){
    if (arr.size() < 2) return arr;
    int mid = floor(arr.size()/2);
    vecotr<int> 
}
class Solution {
public:
    int minMoves2(vector<int>& nums) {
        if(nums.size() == 1) return 0;
        if(nums.size() == 2) return abs(nums[0] - nums[1]);
        int ans;
        //sort the array first
        sort(nums.begin(), nums.end());
        // check half of value larger than median or not
        int mid = floor(nums.size()/2);
        int cnt = 0;
        for(int i = 0; i < nums.size(); i++){
            cnt += nums[mid] - nums[i];
        }
        int check = (cnt > 0) ? nums[mid+1]: nums[mid];
        for (auto val; nums){
            ans += check - nums[i];
        }
        return abs(ans);
    }
};

int main (){
    Solution ans;
    vector<int> nums = {1,2,3};
    int res = ans.minMoves2(nums);
    cout << res;
}


