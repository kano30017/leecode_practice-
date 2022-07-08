#%%
from operator import ne
from typing import List



class Solution:
    def partitionLabels(self, s: str):
        pos = {}
        end = {}
        cnt = 0
        for word in s:
            end[word] = cnt
            if word not in pos:
                pos[word] = cnt
            cnt += 1
        record = []
        print(pos)
        print(end)
        sym = 'a'
        last = 0
        for word in end:
            if end[sym] < pos[word]:
                    sym = word
                    next
                else:
                sym = word
                record.append(pos[word] -last)
                last =record[-1]
        return record
        # for letter in end:
        #     print(f"{sym} v.s. {letter}")
        #     if (end[sym] > pos[letter]):
        #         print(f" {end[sym]} > {pos[letter]} No change")
        #         next
        #     elif end[sym] == pos[letter]:
        #         next
        #     else:
        #         print(f" {end[sym]} < {pos[letter]}, record")
        #         sym = letter
        #         record.append(pos[letter] - last)
        #         print(f"Append value {pos[letter] - last}, Change to {sym}")
        #         last = record[-1]
        return record

                    
        
        



test = "ababcbacadefegdehijhklij"
sol = Solution().partitionLabels(test)
print(sol)
# %%
