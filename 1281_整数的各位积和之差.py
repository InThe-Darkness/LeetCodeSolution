class Solution:
    def subtractProductAndSum(self, n: int) -> int:
        string = str(n)
        mul = 1
        for x in string:
            mul *= int(x)
        
        add = 0
        for x in string:
            add += int(x)

        return mul - add