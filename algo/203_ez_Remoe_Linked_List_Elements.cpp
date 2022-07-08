/**
 * Definition for singly-linked list.

 */
#include <iostream>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        if (!head || (head -> next == NULL && head -> val == val) ) return NULL;
        ListNode* cur = head;
        ListNode* prev = 0;
        prev
        while(cur -> next != NULL){
            if(cur -> next -> val == val){
                cur -> next = cur -> next -> next;
                tem = cur -> next;
                delete tem;
            }
        }
        return prev;
    }
        // // Recursive solution
        // if(!head) return head;
        // head -> next = removeElements(head-> next, val);
        // return(head->val == val ? head -> next : head);
};
class Linkedlist{
public:
    ListNode* head;
    void insert(ListNode* x);
}
void Linkedlist::insert(ListNode* x){
    ListNode * cur = head;
    while(cur -> next != NULL){
        cur  = cur -> next;
    }
    cur -> next = x ;
    x -> next  = NULL;

}
int main (){
    Solution ans;
    vector<int> ll = {1,2,6,3,4,5,6};

    for (int val : ll){

    }
    ListNode* {head}

    return 0 ;
}