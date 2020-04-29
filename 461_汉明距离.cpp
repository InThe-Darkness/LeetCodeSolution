class Solution {
public:
    int hammingDistance(int x, int y) {
        int ans= 0, temp = x ^ y;
        while(temp){
            ans++;
            temp &= (temp - 1);
        }
        return ans;
    }
};