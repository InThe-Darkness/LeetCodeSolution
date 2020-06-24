class Solution:
    def rotatedDigits(self, N: int) -> int:
        ans = 0
        temp = {'2':'5', '5':'2', '6':'9', '9':'6', '0':'0', '1':'1', '8':'8'};
        for i in range(N+1):
            tag = True
            temp1 = ""
            for x in str(i):
                if not x in "2569018":
                    tag = False
                    break
                temp1 += temp[x]
            if tag and int(temp1) != i:
                ans += 1
        return ans