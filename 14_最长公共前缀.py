class Solution:
    def longestCommonPrefix(self, strs: List[str]) -> str:
        if strs == []:
            return ""
        ans = ""
        length = len(strs[0])
        for x in strs:
            if len(x) < length:
                length = len(x)
        for i in range(length):
            c = strs[0][i]
            for x in strs:
                if x[i] != c:
                    return ans
            ans += c
        return ans