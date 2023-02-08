class Solution:
    def jump(self, nums: list[int]) -> int:
        l = r = 0
        res = 0
        while r <len(nums) -1:
            far = 0
            for i in range(l, r+1):
                far = max(far, i + nums[i])
            l = r +1
            r = far
            res += 1
        
        return res

s = Solution()

lst = [2,3,1,1,4]

print(s.jump(lst))