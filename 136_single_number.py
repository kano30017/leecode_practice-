#%%
class Solution:
    def singleNumber(self, nums: [int]) -> int:
        ## my code
        # dict = set()
        # for i in nums:
        #     if i in dict:
        #         dict.remove(i)
        #     else:
        #         dict.add(i)
        # return dict
        ## faster way
        res = 0
        for n in nums:
            res = n^res
        return res



list = [2,2,1]
ans = Solution().singleNumber(list)
print(ans)
# %%

# %%
