class Solution:
    def findDuplicate(self, nums: List[int]) -> int:
        temp = [0] * len(nums)
        for x in nums:
            temp[x] += 1
        ans = 0
        for x in range(len(temp)):
            if temp[x] > temp[ans]:
                ans = x
        return ans