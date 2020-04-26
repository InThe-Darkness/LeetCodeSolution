class Solution:
    def intToRoman(self, num: int) -> str:
        value = {1:'I', 4:"IV", 5:'V', 9:"IX", 10:'X', 40:"XL", 50:'L', 90:"XC", 100:'C', 400:"CD", 500:'D', 900:"CM", 1000:'M'}
        value1 = {0:1, 1:4, 2:5, 3:9, 4:10, 5:40, 6:50, 7:90, 8:100, 9:400, 10:500, 11:900, 12:1000}
        ans = ""
        i = len(value) - 1
        while num > 0:
            while num > 0 and int(num / value1[i]) != 0:
                ans += value[value1[i]]
                num -= value1[i]
            i -= 1
        return ans

#solution2:
class Solution:
    def intToRoman(self, num:int) -> str:
        value = ['I', "IV", 'V', "IX", 'X', "XL", 'L', "XC", 'C', "CD", 'D', "CM", 'M']
        value1 = [1, 4, 5, 9, 10, 40, 50, 90, 100, 400, 500, 900, 1000]
        ans = ""
        for i in range(len(value) - 1, -1, -1):
            while num > 0 and int(num / value1[i]) != 0:
                ans += value[i]
                num -= value1[i]
        return ans