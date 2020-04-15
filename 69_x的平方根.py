class Solution:
    def mySqrt(self, x: int) -> int:
        ans = x
        for i in range(1, x):
            if i * i > x:
                break
            ans = i
        return ans