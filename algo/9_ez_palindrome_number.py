#%%
class Solution:
    def isPalindrome(self, x: int) -> bool:
        list = [word for word in str(x)]
        for i in range(len(list)//2):
            print(i)
            if  list[0] == list[-1]:
                list.pop(0)
                list.pop(-1)
            else:
                return False
        return True

yy = 1234567654321
ans = Solution().isPalindrome(yy)
print(ans)
# %%
123//2
# %%
test = list(yy)
