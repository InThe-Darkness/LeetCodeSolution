# Solution1：
class Solution:
    def removeDuplicates(self, nums: List[int]) -> int:
        tempset = set(nums)
        testlist = deepcopy(nums)
        for i in range(len(testlist)):
            if testlist[i] in tempset:
                tempset.remove(testlist[i])
            else:
                nums.pop(nums.index(testlist[i]))
        return len(nums)

# Solution2：
class Solution:
    def removeDuplicates(self, nums: List[int]) -> int:
        lennums = len(nums)
        if lennums == 0:
            return 0
        if lennums == 1:
            return 1
        pos1 = 0
        pos2 = 1
        while pos2 < lennums:
            if nums[pos2] == nums[pos1]:
                lennums -= 1
                nums.pop(pos2)
            else:
                pos1 += 1
                pos2 += 1
        return len(nums)