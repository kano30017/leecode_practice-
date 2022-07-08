#include <iostream>

using namespace std;
class Solution {
public:
    int numberOfSteps(int num) {
       int cnt = 0;
       while(num> 0){
        //    num = (num%2)?(num -1): (num/2);
        num = num & 1 ? num - 1 : num >> 1; 
           cnt++;
           
       }
       return cnt;
    }
};

int main(){
    Solution ans;
    int num = 9;
    cout <<  ans.numberOfSteps(num) << endl;
    return 0;
}