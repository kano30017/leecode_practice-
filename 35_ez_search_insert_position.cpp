#include <iostream>
#include <vector>

using namespace std;
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int length = nums.size();
        int head = 0;
        int tail = length -1;
        int mid ;
        while (head <= tail){
            mid = (head + tail)/2;
            if (target == nums[mid]) return mid;
            if (target > nums[mid]){
                head = mid + 1;
            }
            else if(target < nums[mid]){
                tail = mid -1;
            }
        }
    return head;
        
    }
};

int main(void){

    vector<int> test = {1,3,5,6};
    int target = 5;


    Solution gg;
    int ans = gg.searchInsert(test, target);
    cout << ans;
}