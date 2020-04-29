class Solution {
public:
    int numberOfSteps (int num) {
        int ans = 0;
        while(num){
            if(1 & num) ans += 2;
            else ans += 1;
            num >>= 1;
        }
        return ans - 1;
    }
};