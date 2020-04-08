class Solution:
    def reverse(self, x: int) -> int:
        s = str(x)
        if s[0] == '-':
            ans = -int("".join(s[-1:0:-1]))
            if ans < -2**31:
                return 0
            return ans
        ans = int("".join(reversed(s)))
        if ans > 2**31 - 1:
            return 0
        return ans