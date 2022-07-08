#%%
# Definition for singly-linked list.


from typing import Optional


class ListNode:
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next

class SingleLinkedList:
    def __init__(self):
        self.head = None
        self.tail = None
    def add_item(self,item = Optional[ListNode]):
        if  item is not isinstance(item, ListNode):
            item = ListNode(item)
        if self.head == None:
            self.head = item
        else:
            self.tail.next = item
        self.tail = item
        return 


class Solution:
    def isPalindrome(self, head: Optional[ListNode]) -> bool:

        ## Easier way
        ## generate  normal and reverse linked list
        ori = rev = ''
        while head:
            ori = ori + str(head.val)
            rev = str(head.val) + rev
            head = head.next
        ## check simimarity of normal and reverse string
        return rev == ori
        ## Advanced way
        


yy = [1,2,3,4,3,1]
test = SingleLinkedList()
for i in yy:
    test.add_item(i)
ans  = Solution().isPalindrome(test.head)
print(ans)
# %%
