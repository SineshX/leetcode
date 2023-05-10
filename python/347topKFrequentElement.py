from typing import List
from collections import Counter
import queue
class Solution:
    def topKFrequent(self, nums: List[int], m: int) -> List[int]:
        d = {}
        for i in nums:
            if i not in d:
                d[i] = 1;
            else:
                d[i] += 1
        # inserted
        # sort dictionay a/c to values : ye reverse wala hai 
        d = dict(sorted(d.items(), key=lambda item: item[1], reverse=True))
        
        res = list(d.keys())[:m]
        # for i in d.keys():
        #     res.append(i)
        #     m -= 1
        #     if( m == 0):
        #         break
        return res

from queue import PriorityQueue
class Solution:
    def topKFrequent(self, nums: List[int], k: int) -> List[int]:
        d = Counter(nums)
        pq = PriorityQueue()
        for key,val in d.items():
            pq.put((-1 * val, key))
        res = []
        for i in range(k):
            res.append(pq.get()[1])
        return res


        


