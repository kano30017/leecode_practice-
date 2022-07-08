#%%
# class Solution:
    # def subsets(self, nums: List[int]) -> List[List[int]]:



class Solution:
    def subsets(self, nums: [int]) -> [[int]]:
        out = [[]]
        for val in nums:
            out +=  [cur + [val] for cur in out]
        return out




l1 = [1,2,3]
ans = Solution().subsets(l1)
print(ans)

# %%
