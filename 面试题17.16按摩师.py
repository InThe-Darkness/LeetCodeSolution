class Solution:
    def massage(self, nums: List[int]) -> int:
        if nums == []:
            return 0
        f = [[0, nums[0]]]
        for i in range(1, len(nums)):
            f.append([max(f[i - 1][0], f[i - 1][1]), nums[i] + f[i - 1][0]])
        return max(f.pop())