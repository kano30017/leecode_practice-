
from typing import List, Optional


class Solution:
    def deleteDuplicates(self, head: Optional[ListNode]-> Optional[ListNode]):
        return ans



class ListNode:
    def __init__(self,val=0, next = None):
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


arr = [1,1,2,3,4,4,5]
testarr = SingleLinkedList()
for i in (arr):
    testarr.add_item(i)

ans = Solution().deleteDuplicates(testarr.head)
for val in ans:
    print(ans)