#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int climbStairs(int n) {
        if(n  < 2) return 1;
        // else{
            // return climbStairs(n-1) + climbStairs(n-2);
        // }
        vector<int> res(n);
        for (int i = 0; i < n ; i++){
            if(i < 2){
                res[i] = 1;
            }
            else{
                res[i] = res[i-1] + res[i-2];
                printf("The %d loop is %d", i, res[i]);
            }
        }
        return res[n-1];
    }
};


int main(){
    Solution ans;
    int test = 30;
    cout << ans.climbStairs(test) << endl;
    return 0 ;
}