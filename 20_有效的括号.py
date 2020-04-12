class Solution:
    def isValid(self, s: str) -> bool:
        if s == "":
            return True
        if s[0] in ")}]":
            return False
        charactor = {'(':')', '{':'}', '[':']'}
        s1 = [s[0]]
        last = 0
        i = 1
        while i < len(s):
            if s[i] in charactor:
                s1 += s[i]
                last += 1
            elif last >= 0:
                if s[i] == charactor[s1[last]]:
                    s1.pop()
                    last -= 1
                else:
                    return False
            else:
                return False
            i += 1
        if len(s1) != 0:
            return False
        return True
                