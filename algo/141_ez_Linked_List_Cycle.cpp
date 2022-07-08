#include <iostream>
#include <vector>
using namespace std;

struct ListNode {
    ListNode *next;
    int val;
    ListNode(int x) : val(x), next(NULL) {};
}
class Solution {
public:
    bool hasCycle(ListNode *head) {
        if(!head)  return false;
        if(!head -> next ) return false;
        ListNode *slow = head;
        ListNode *fast = head;
        while(slow && fast && fast -> next){
            fast  = fast -> next -> next;
            slow = slow -> next;
            if( slow == fast) return true;
        }
        return false;
    }
};

int main(){
    Solution ans;
    vector<int> arr = {1,2,3,4};
    ListNode *head(1);

    bool ans.hasCycle()

    return 0;
}