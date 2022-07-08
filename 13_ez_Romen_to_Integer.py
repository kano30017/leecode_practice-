#%%
class Solution:
    def romanToInt(self, s: str) -> int: 
        transform_dict = { 'I' : 1, 'V' : 5,'X' : 10, 
         'L' : 50,'C' : 100, 'D' : 500, 'M': 1000}
        word = 0
        if len(s) == 1:
            word = transform_dict[s]
            return  word
        for index, char in enumerate(s):
            if index < 1:
                cur = char
                before = 0
                word += transform_dict[cur]
                print("index < 1 : current is ", word)
            else:
                before = cur
                cur = char 
                word += transform_dict[cur]
                print("Idex : ", index,"Before :", before, " Cur :", cur)
#                if transform_dict[before] >= transform_dict[cur] :
#                    print("Current is  smaller than before, add value is " ,cur,". That is ", transform_dict[cur], ".Total value become", word)
#                else :                   
                if transform_dict[before] < transform_dict[cur] :
                    word -=  2* transform_dict[before]
                    print("Current is larger than/equal to before, minus value is " ,cur,". That is ", transform_dict[cur], ".Total value become", word)
        return word

if __name__ == "__main__":
    testword = 'LVIII'
    result = Solution().romanToInt(testword)
    print(result)
# %%
