#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

class Solution {
public:
    int maxArea(vector<int>& height) {
        if (height.size() < 2 ) return 0 ;
        int head = 0;
        int tail = height.size() - 1;
        int maxh = 0;
        while (head < tail){
            maxh = max(maxh, (tail - head) * min(height[head],height[tail]) );
            if (height[tail] > height[head]){
                head++;
            }
            else {
                tail--;
            } 
        cout << ", head : " << height[head] << "  Tail : " << height[tail]  << "Maxh : " << maxh << "\n" ;

        }
    return maxh;   
}
};
int main(){
    Solution ans;
    vector <int> h = {2,3,4,5,18,17,6};
    cout <<  ans.maxArea(h);
    return 0;


}