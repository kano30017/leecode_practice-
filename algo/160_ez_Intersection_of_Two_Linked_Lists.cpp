#include <iostream>

using namespace std;

class ListNode {
public:
    int val;
    ListNode * next;
    ListNode(): val(0), next(NULL) {};
    ListNode(int x):val(x),next(NULL) {};
    friend class Linkedlist;
};
class Linkedlist{
public:
    Linkedlist* first;
    Linkedlist(): first(0) {};
    void push_back(int x); 
}

void Linkedlist::push_back(int val){
    ListNode *NewNode = new ListNode(val);
    if (head == NULL){
        head = NewNode;
        return;
    }
    ListNode *cur = head;
    while(cur ->next != NULL){
        cur = cur ->next;
    }
    cur -> next = NewNode;
    return;

}

class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        if(!headA -> next || !headB-> next) return 0;
        ListNode *tem(0);
        return tem;        
    }
};

int main(){
    ListNode * l1 = new ListNode(3);
    cout << l1->val;
    Linkedlist::push_back(5);
    cout << l1->next ->val;



}