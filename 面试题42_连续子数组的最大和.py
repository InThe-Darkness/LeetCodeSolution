class Solution:
    def maxSubArray(self, nums: List[int]) -> int:
        tag = nums[0]
        ans = nums[0]
        for x in range(1, len(nums)):
            tag = max(tag + nums[x], nums[x])
            if tag > ans:
                ans = tag
        return ans