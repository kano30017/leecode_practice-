#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int size = digits.size();
        int zero_count = 0;
        int goal = digits.back();
        while(goal == 9  && zero_count < size){ 
            goal = digits.back();
            cout << "Goal to be : " << goal << "\n";
            if(digits.empty())  break;
            digits.pop_back();
            zero_count++;
        }
        cout << "Zero_count :" << zero_count << endl;
        if(goal == 9) {
            digits.push_back(1);
        }
        else {
            digits.pop_back();
            digits.push_back(goal+1);
        }
        for(int i =0 ; i < zero_count; i++){
            digits.push_back(0);
        }
        return digits;
    }
};
int main(){
    Solution ans;
    vector <int> nums({1,9});
    for(auto _ : nums){
        cout << _ << ",";
    }
    cout << endl;
    vector<int> res = ans.plusOne(nums);
    for(auto val: res){
        cout << val << ",";
    }
}