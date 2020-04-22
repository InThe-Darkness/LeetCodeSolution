class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        int ans = 0;
        int bit = 0;
        while (!(1 & n) && bit < 32) n >>= 1, bit++;
        while (n) {
            ans <<= 1;
            if (1 & n) ans += 1;
            n >>= 1;
            bit++;
        }
        if (bit < 32) ans <<= 32 - bit;
        return ans;
    }
};