class Solution {
public:
    int hammingWeight(uint32_t n) {
        int ans = 0;
        while(n){
            if(1 & n) ans++;
            n>>=1;
        }
        return ans;
    }
};