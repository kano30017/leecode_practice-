#include <iostream>

using namespace std;
class Solution {
public:
    int mySqrt(int x) {
        if (x < 4) return 1 ;
        int res = 2;
        while(res < 65535){ 
            int val =  x/res -res;
            cout << "For " << res << ", Reminder value : "<< val << endl;
            if(val > 0)
                res++;
            else if (ans ==0) return res;
            else return res - 1;
        }
        return res;
        //overflow
        // for(int i = 2; i < x -1; i++){
        //     if (  (i+1)(i+1) > x) 
        //         return i;
        // }
        // return x;

    }
};

int main(){
    Solution ans;
    int val = 4;//214739560;
    cout <<  ans.mySqrt(val);
}