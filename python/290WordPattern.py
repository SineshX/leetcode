pattern = "abba"
s = "dog cat cat dog"
# 290. Word Pattern 
# https://leetcode.com/problems/word-pattern/description/ 


class Solution:
    def wordPattern(self, pattern: str, s: str) -> bool:
        lst = s.split()
        d = {}
        if len(lst) != len(pattern): return False 
        for c,val in zip(pattern, lst):
            if c not in d:
                d[c] = val
            elif d[c] != val:
                return False
        st = set(d.values())
        if len(st) != len(d): return False
        return True