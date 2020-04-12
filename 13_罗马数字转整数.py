class Solution:
    def romanToInt(self, s: str) -> int:
        value = {'I':1, 'V':5, 'X':10, 'L':50, 'C':100, 'D':500, 'M':1000}
        ans = 0
        for i in range(len(s)):
            if s[i] == 'V':
                if i - 1 >= 0 and s[i - 1] == 'I':
                    ans += 4 - value[s[i - 1]]
                else: ans += 5
            elif s[i] == 'X':
                if i - 1 >= 0 and s[i - 1] == 'I':
                    ans += 9 - value[s[i - 1]]
                else: ans += 10

            elif s[i] == 'L':
                if i - 1 >= 0 and s[i - 1] == 'X':
                    ans += 40 - value[s[i - 1]]
                else: ans += 50
            elif s[i] == 'C':
                if i - 1 >= 0 and s[i - 1] == 'X':
                    ans += 90 - value[s[i - 1]]
                else: ans += 100

            elif s[i] == 'D':
                if i - 1 >= 0 and s[i - 1] == 'C':
                    ans += 400 - value[s[i - 1]]
                else: ans += 500
            elif s[i] == 'M':
                if i - 1 >= 0 and s[i - 1] == 'C':
                    ans += 900 - value[s[i - 1]]
                else: ans += 1000
            else:
                ans += value[s[i]]

        return ans

# solution 2:
class Solution:
    def romanToInt(self, s: str) -> int:
        if s == "":
            return 0
        value = {'I':1, "IV":4, 'V':5, "IX":9, 'X':10, "XL":40, 'L':50, "XC":90, 'C':100, "CD":400, 'D':500, "CM":900, 'M':1000}
        ans = value[s[0]]
        prev = s[0]
        for i in range(1, len(s)):
            if prev + s[i] in value:
                ans += value[prev + s[i]] - value[prev]
            else:
                ans += value[s[i]]
            prev = s[i]
        return ans