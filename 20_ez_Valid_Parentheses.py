#%%
class Solution:
    def isValid(self, s: str) -> bool:
        # () for 40 & 41, [] for 91 & 93 , {} for 123 & 125
        # total = 81 / 184 / 248
        loop = 0
        switch = 0
        checkpoint = []
        on = [40,91, 123]
        off = [41,93, 125]
        for word in s:
            val = ord(word)
            # print(val)
            if val in on:
                checkpoint.append(val)
                # print("Left parentheses : ",word)
            elif val in off:
                # print("Right parenthese  : ", word)
                try :
                    if  abs(val - checkpoint[-1]) < 3 :
                        # print( "minus value : ", (val - checkpoint[-1]))
                        try:
                            checkpoint.pop()
                        except:
                            return False
                    else:
                        return False
                except:
                    return False
        if checkpoint :
            return False
        else :
            return True
            
            


if __name__ == "__main__":
    t2  = '({{{{}}}))'
    if Solution().isValid(t2):
        print("True")
    else:
        print("False")

# %%
