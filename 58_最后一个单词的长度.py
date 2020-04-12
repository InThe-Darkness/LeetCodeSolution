class Solution:
    def lengthOfLastWord(self, s: str) -> int:
        if s == "":
            return 0
        s = s.split()
        if s == []:
            return 0
        return s.pop().__len__()
