#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Solution {
public:
    bool backspaceCompare(string s, string t) {
        if (!s.size() or !t.size()) return false;
        string finals = solve(s);
        string finalt = solve(t);
        cout << "s : " << finals  << " t : " << finalt << endl;
        if(finals!= finalt) return false;
        return true;
    }
private:
    string solve(string str){
        string final;
        for(int i = 0; i < str.size(); i++)
        {
            if(str[i]=='#' && final.size() > 0) final.pop_back();
            if(str[i] != '#') final += str[i];
        }
        return final;
    }
};
int main(void){
    string s = "a##b";
    string t = "c#d#";
    Solution ans;
    cout <<  ans.backspaceCompare(s,t)  << endl;
    return 0;
}