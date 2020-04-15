class Solution:
    def titleToNumber(self, s: str) -> int:
        string = "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
        ans = 0
        value = dict([(string[i], i + 1) for i in range(len(string))])
        s = s[::-1]
        for i in range(len(s)):
            ans += value[s[i]]*26**i
        return ans