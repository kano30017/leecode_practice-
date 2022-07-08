#%%
from typing import List
class Solution:
    def removeElement(self, nums: List[int], val: int) -> int: 
        count = len(nums)
        a = 0
        for num in nums:
            if num != val:
                nums[a] = num
                a += 1
        print(nums)
        return a
        
test = [3,2,2,3, 1,3, 2]
target = 3
sol = Solution().removeElement(test, target)
print(sol)
# %%
