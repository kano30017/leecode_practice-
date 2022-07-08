//Binary search
// The API isBadVersion is defined for you.
// bool isBadVersion(int version);
#include <iostream>

using namespace std;
class Solution {
public:
    int firstBadVersion(int n) {
        int first = 1;
        int last = n; 
        int mid;
        while(first < last){
            mid = first + (last - fist)/2; // Don't use a + b to prevent from overflow 
            if(isBadVersion(mid)){
                last = mid ;
            }
            else{
                first = mid + 1;
            }
        }
        return first;
    }
private:    
    bool isBadVersion(int version){
        int bad = 3;
        if(version >= bad) return true;
        else return false;
    }
};


int main(){
    int n = 6;
    Solution gg ;
    cout << gg.firstBadVersion(n) << endl;

}