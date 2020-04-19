class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        f = [0]
        for i in range(1, len(prices)):
            f.append(max(0, prices[i] - min(prices[0:i])))
        return max(f)