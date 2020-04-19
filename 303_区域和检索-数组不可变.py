class NumArray:

    def __init__(self, nums: List[int]):
        if len(nums) > 0:
            self.ans = [nums[0]]
        for i in range(1, len(nums)):
            self.ans.append(self.ans[i - 1] + nums[i])
        #print(self.ans)

    def sumRange(self, i: int, j: int) -> int:
        if i == 0:
            return self.ans[j]
        return self.ans[j] - self.ans[i - 1]


# Your NumArray object will be instantiated and called as such:
# obj = NumArray(nums)
# param_1 = obj.sumRange(i,j)