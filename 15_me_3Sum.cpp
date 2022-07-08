#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> ans = {};
        if(nums.size() < 3) return ans;
        //sort the array
        sort(nums.begin(), nums.end());
        // if((nums.begin() >0 && nums.end() > 0)  || (nums.begin() < 0 && nums.end() < 0)) return ans;
        for(auto ele : nums) cout << ele << " ," ;
        cout << endl;
        for(int i = 0; i < nums.size() - 2;i++){
            if(i > 0 && nums[i] == nums[i -1]) continue;
            int head = i+1;
            int tail = nums.size() -1;
//            while(nums[head] == nums[i]) head++;
            while(head < tail){
                cout << "Picked " <<  nums[i] <<" Head " << nums[head] << " Tail " << nums[tail] << endl;
                if( nums[head] + nums[tail] == -nums[i]){
                    //only exist one solution and safe to shrink two pointer simutaneously
                    ans.push_back({nums[i],nums[head], nums[tail]});
                    head++;
                    tail--;
                    cout << nums[i] << "," << nums[head] <<"," <<  nums[tail] << " Match!!" << endl;
                        while(nums[head] == nums[head - 1]){
                            head++;
                        }
                        while(nums[tail] == nums[tail + 1]){
                            tail--;
                        }
                        // }
                }
                else if( nums[head] + nums[tail] > -nums[i] ){
                    tail--;
                    cout << "Too large, tail shift to " << nums[tail] << endl; 
                }
                else{
                    head++;
                    cout << "Too small, head shift to " << nums[head] << endl; 
                    }
            }
        }
        return ans;
    }
};


int main(){
    Solution ans;
    vector<int> nums = {-1,0,1,2,-1,-4};
    vector<vector<int>> res = ans.threeSum(nums);
    cout << "Match group : "  << endl;
    for(int i = 0; i < res.size() ;i++){
        for (int  j = 0 ; j < res[i].size(); j++){
            cout  << res[i][j] << ",";
        }
        cout << endl;
    }
    return 0;
}