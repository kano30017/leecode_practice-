#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i = m - 1;
        int j = n - 1;
        int k = m + n - 1;
        while(i >= 0 && j >= 0){
            if(nums1[i] > nums2[j]){
                nums1[k] = nums1[i];
                // cout << " Push index : " << k << "to be " << nums1[i] << endl; 
                i--;
            }
            else{
                nums1[k] = nums2[j];
                // cout << " Push index : " << k << "to be " << nums2[j] << endl; 
                j--;
            }
            k--;
        }
        while(j >= 0 ){
            nums1[k] = nums2[j];
            j--;
            k--;
        }
    }
};
int main(){
    Solution ans;
    vector<int> nums1 = {1,2,3,0,0,0};
    int m = 3;
    vector<int> nums2 = {2,5,6};
    int n = 3;
    for (int val: nums1) cout << val << ",";
    cout << endl;
    for (int val: nums2) cout << val << "," ;
    cout << endl;

    ans.merge(nums1, m, nums2, n);
    for (int val: nums1) cout << val << "," ;
}