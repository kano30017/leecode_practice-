#include <iostream>
#include <string>
#include <cmath>
#include <bitset>
#include <algorithm>
using namespace std;

class Solution {
public:
    string addBinary(string a, string b){
        // fill with same digit
        while(a.size() < b.size()){
            a.insert(a.begin(), '0');
        }
        while(a.size() > b.size()){
            b.insert(b.begin(), '0');
        }
        for(int aa = 0; aa < a.size(); aa++){
            cout << "A : " << a[aa] << " ,B : " << b[aa] << endl;
        }
        // take c as remainder from last digit
        bool c = 0;
        for (int i = a.size() -1 ; i >= 0; i--){
            if (c){
                // a,b,c = 1,0,1 or 0,1,0 => c,a  = 1,0
                if (a[i] != b[i]){
                    a[i] = '0'; 
                    c = 1;
                }
                // a,b,c = 0,0,1 => c, a = 0,1
                else if(a[i] == '0'){
                    a[i] = '1';
                    //a[i] == 0 
                    c = 0;
                }
                // a,b,c = 1,1,1 => n+1, n  = 1,1
                // must be tree 
                }
            else{
                // a,b,c = 1,0,0 or 0,1,0 => c,a = 0,1
                if (a[i] != b[i]){
                    a[i] = '1';
                    //c keep
                }
                // a,b,c = 0,0,0  => c,a = 0,0
                // must be tree
                //a,b,c = 1,1,0 => c,a, = 1,0
                else if (a[i] == '1'){
                    a[i] = '0';
                    c = 1;
                }
            }
        }
        if(c){
            a.insert(a.begin(), '1');
        }
        return a;
    }

};
//     string addBinary(string a, string b) {
//         if (a == "0" && b == "0") return "0";
//         int sum  = binstr2int(a) + binstr2int(b);
//         cout << sum;
//         string res ="";
//         while(sum){
//             res += (sum%2) + '0';
//             sum /= 2; 
//         }
//         reverse(res.begin(), res.end());
//         return  res;
//     }
// private:
// int binstr2int(string a){
//     int x = 0;
//     for(int i = 0; i < a.length(); i++){
//             x +=  int(a[i]-'0') * pow(2,a.length() - i - 1);
//     }
//     // cout << x << endl;
//     return x;
// }
// };

int main(){
    string a,b ;
    a =  "0111" ;
    b =  "101" ;
   Solution ans;
   string gg = ans.addBinary(a,b);
   cout << a << "  + " << b << endl;
   cout << gg << endl;
    return 0;
}