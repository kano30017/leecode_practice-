/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
#include <iostream>
#include <vector>

using namespace std;
struct ListNode{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
}

class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
    }
};


int main(){
    ListNode* l1 = New ListNode(2);
    ListNode* l2 = New ListNode(6);
    ListNode* l3 = New ListNode(0);
    ListNode* r1 = New ListNode(1);
    ListNode* r2 = New ListNode(4);
    ListNode* r3 = New ListNode(3);
    l1 -> next = l2;
    l2 -> next = l3;
    r1 -> next = r2;
    r2 -> next = r3;
    Solution ans;
    ListNode* result = ans.addTwoNumbers(l1,r1);
}