# paste the class 
# and copy the function name 
from collections import Counter, defaultdict
from typing import List
from collections import Counter, defaultdict
class Solution:
    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:
        res = defaultdict(list)
        for s in strs:
            count = [0]*26
            for c in s:
                count[ord(c) - ord('a')] += 1
            res[tuple(count)].append(s)
        return res.values()
        # gives u values 


s = Solution()

# input data 
lst = ["eat","tea","tan","ate","nat","bat"]

print(s.groupAnagrams(lst))