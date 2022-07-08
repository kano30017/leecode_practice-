#%%
import time;
class Solution:
    def twoSum(self, nums: [int], target: int) -> [int]:
        dict = {}
        for i in range(len(nums)):
            # if dict.__contains__(target -nums[i]): # same method but faster for xxx in xxx
            if target - nums[i] in dict:
                return [dict[target - nums[i]],i]
            else:
                dict[nums[i]] = i
        



t1 = time.time();
arr = [1,3,5,7,8]
target = 10
ans = Solution().twoSum(arr, target)
t2 = time.time();
print(t2- t1)

# %%
