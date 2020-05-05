class Solution {
public:
    int jump(vector<int>& nums) {
        int maxdis = nums[0], maxtemp = maxdis;
        int ans = 0, i = 1;
        while(i < nums.size()){
            while(i <= maxdis && i < nums.size()){
                maxtemp = max(maxtemp, i + nums[i]);
                i++;
            }
            maxdis = maxtemp;
            ans++;
        }
        return ans;
    }
};

