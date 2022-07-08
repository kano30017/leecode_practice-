#include <iostream>
#include <list>
#include <vector>

using namespace std;
struct ListNode{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {};
    ListNode(int x) : val(x), next(nullptr){};
    ListNode(int x, ListNode *next) : val(x), next(next){};
};


class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        
        return head;
    }
};

int main(){
    vector<int> nums = {1,1,2,3,4,4,5};
    vector<ListNode>  *linklist(nums.size());
    for(int i= nums.size() - 2 ; i > 0; i--){
        linklist[i] = linklist[i -1] -> next
        linklist[i]->val = nums[i];
    }
    ListNode* cur = array.head;
    while(cur->next != NULL) {
        cout  << cur->val;
        cur = cur-> next;
    }
    return 0;
}
