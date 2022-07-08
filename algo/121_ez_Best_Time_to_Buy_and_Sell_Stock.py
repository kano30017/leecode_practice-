#%%
from typing import List
import operator 

class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        min = prices[0]
        delta = 0
        for val in prices:
            if val < min:
                min = val
            if   val - min > delta:
                delta = val - min
        return delta

## Kandane algo
# import operator
#class Solution:
#    def maxProfit(self, prices: List[int]) -> int:
#        max_ending_here, max_so_far = 0, 0
#        for profit in map(operator.sub, prices[1:], prices):
#            max_ending_here = max(max_ending_here + profit, 0)
#            max_so_far = max(max_so_far, max_ending_here)
#        return max_so_far



stock = [7,6,5,4,2,1]
sol = Solution().maxProfit(stock)
print(sol)       
# %%
