#f[n] = max(f[n - 1] + nums[n], f[n - 1])
# ans = max(f)


class Solution:
    def maxSubArray(self, nums: List[int]) -> int:
        f = [nums[0]]
        for x in range(1, len(nums)):
            f.append(max(f[x - 1] + nums[x], nums[x]))
        return max(f)

class Solution:
    def maxSubArray(self, nums: List[int]) -> int:
        tag = nums[0]
        ans = nums[0]
        for x in range(1, len(nums)):
            tag = max(tag + nums[x], nums[x])
            if tag > ans:
                ans = tag
        return ans