class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int ans = 0;
        int i = 0;
        for(auto p : nums){
            i = 0;
            while(p){
                i++;
                p /= 10;
            }
            if(i != 0 && i % 2 == 0) ans++;
        }
        return ans;
    }
};