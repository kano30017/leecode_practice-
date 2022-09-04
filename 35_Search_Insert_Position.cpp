#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int l = 0;
        int r = nums.size() - 1;
        int mid;
        while(l < r) {
            mid = l + (r - l) / 2;
            if(target == nums[mid]){
                return mid;
            }
            else if( target > nums[mid]) l =mid +1 ;
            else r = mid - 1;
            cout << "L : " << nums[l] << "R :" << nums[r] << endl;
        }        
        return l ;
    }
};

int main(){
    Solution ans;
    vector<int>  nums= {1,3,4,6};
    int target = 5;
    cout << ans.searchInsert(nums,target) << endl;

}