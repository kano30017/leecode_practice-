#include <iostream>
#include <string>
#include <unordered_set>
using namespace std;
using std::string;
class Solution {
public:
    bool hasAllCodes(string s, int k) {
        int need = 1 << k; // set need =  2^k
        unordered_set<string> hash_map ;
        for(int i = 0; i <= s.size() - k; i++){
            hash_map.insert(s.substr(i,k)); // string from i with size k
        }
        for (auto gg :  hash_map){
            cout << gg << " " ;
        }
        cout << endl;
        return hash_map.size() == (1<< k) ;
    }
};


int main(){
    Solution ans;
    string s = "00110";
    int k = 2;
    cout << "Origin string " << s << endl;
    cout <<bool(ans.hasAllCodes(s,k)) << endl;
    return 0;
}
