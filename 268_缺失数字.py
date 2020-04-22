class Solution:
    def missingNumber(self, nums: List[int]) -> int:
        temp = [-1] * (len(nums) + 1)
        for x in nums:
            temp[x] = x
        for x in range(len(temp)):
            if temp[x] == -1:
                return x