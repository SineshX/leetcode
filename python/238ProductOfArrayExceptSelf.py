from typing import List 

class Solution:
    def productExceptSelf(self, nums: List[int]) -> List[int]:
        n = len(nums)
        res = [1]*n 
        curr_prod = 1
        for i in range(n):
            res[i] = curr_prod
            curr_prod *= nums[i]
        curr_prod = 1
        n-=1
        for i in range(n, -1, -1): 
            res[i] *=  curr_prod
            curr_prod *= nums[i]
        return res

class Solution2:
    def productExceptSelf(self, nums: List[int]) -> List[int]:
        n = len(nums)
        res = [1]*n
        prefix = [1]*n
        pre = 1
        postfix = [1]*n
        post = 1
        for i in range(n):
            prefix[i] = pre
            pre = pre*nums[i]

            postfix[n-i-1] = post
            post = post*nums[n-1-i]

        for i in range(n): 
            res[i] = prefix[i] * postfix[i]
        return res


class Solution1:
    def productExceptSelf(self, nums: List[int]) -> List[int]:
        res = []
        prod = 1
        zero_count = 0
        for i in nums:
            if i != 0:
                prod = i * prod
            else:
                zero_count += 1
        
        if zero_count > 1: return [0]*len(nums)
        elif zero_count == 1:
            z_index = nums.index(0)
            res = [0]*len(nums)
            res[z_index] = prod
            return res
        for i in nums:
                res.append(int(prod/i))

        return res
