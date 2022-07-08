#include <iostream>
#include <bitset>
#include <string>

using namespace std;

class Solution { 
public:
    int solution(int N){
        string s = bitset<32>(N).to_string();
        int dis = 0;
        int pos = 0;
        int flag = 0;
        for(int i = 0; i < s.size(); i++){
            if (s[i] == '1'){
                if(dis < i - pos && flag == 1) {
                    dis = i - pos;
                }
                if(flag == 0){
                    flag = 1;
                }
                pos = i ;
                cout << "Encounter 1 in " << i << " , with max distance " << dis << endl;
            }

        }
        return dis;
    }
     
};


int main(){
    Solution ans;
    int test =123545434;
    ans.solution(test);
    cout <<bitset<32>(test) << endl;

    return 0;
}