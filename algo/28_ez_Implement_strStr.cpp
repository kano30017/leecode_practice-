#include <iostream>
#include <string>
using namespace std;
class Solution {
public:
    int strStr(string haystack, string needle) {
        if (!needle.size()){
            return 0;
        }
        int trigger = 0;
        for (int h = 0; h < haystack.size(); h++){
            if(haystack[h] == needle[0]){
                trigger = h;
                int n = 0;
                while (n != needle.size() && h + n != haystack.size() && haystack[h + n] == needle[n]) {n += 1; }
                if (n == needle.size()){ return  h ;}
            }
        }
        return -1;
    }
};
int main(void)
{
    string  haystack = "hello";
    string  needle = "loo";
    Solution ans;
    cout << ans.strStr(haystack, needle);
    return 0;
}