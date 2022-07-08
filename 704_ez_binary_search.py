#%%
from typing import List
class Solution:
    def search(self, nums: List[int], target: int) -> int:
        l = 0
        r = len(nums) - 1 
        while(r >= l):
            c = ( r + l) //2
            if (target < nums[c]):
                r = c - 1
                print(f"Right is {nums[r]}")
            elif (target > nums[c]):
                l = c + 1
                print(f"Left is {nums[l]}")
            else :
                return c
            c = (r + l) //2 
            print(f"Center becomes {nums[c]}")
            if (target > nums[r]) or (target < nums[l]):
                return -1
        return -1

nums = [-1,0,3,5,9,12]
target = 10
sol = Solution().search(nums, target)
print(sol)       
# %%
