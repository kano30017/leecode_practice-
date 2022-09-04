#include <iostream>
#include <string>
using namespace std;



class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int count = 0;
        for (int i = 0; i < stones.size(); i++){
            // cout << "i : " << stones[i];
            for (int j = 0 ; j < jewels.size(); j++){
                // cout << " j : " << jewels[j] ;
                if (stones[i] == jewels[j]) {
                    count++;
                    break;
                }
            }
            // cout << endl;
        }
        return count;   
    }
};


int main(){

    Solution ans;
    string jewels, stones;
    jewels = "aA";
    stones = "aAAbbbAb";
    int res = ans.numJewelsInStones(jewels, stones);
}