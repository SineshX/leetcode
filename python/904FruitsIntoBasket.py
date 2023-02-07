import collections
import pprint
class Solution:
    def totalFruit(self, fruits: list[int]) -> int:
        l, res = 0,0
        nums = collections.Counter()
        for r in range(len(fruits)):
            nums[fruits[r]] += 1
            while len(nums) > 2:
                nums[fruits[l]] -= 1 
                if not nums[fruits[l]]:
                    nums.pop(fruits[l])
                l += 1
            res = max(res, r - l + 1)
            pprint.pprint(nums)
        return res

s = Solution()

fruits = [1,2,3,2,2]
# fruits = [0,0,1,2,0,1,0,1]

print(s.totalFruit(fruits))