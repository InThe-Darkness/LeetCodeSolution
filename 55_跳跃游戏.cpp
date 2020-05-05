class Solution {
public:
    bool canJump(vector<int>& nums) {
        int maxdis = nums[0];
        for(int i = 1; i < nums.size(); i++){
            if(i <= maxdis) maxdis = max(maxdis, nums[i] + i);
            else break;
        }
        return maxdis >= nums.size() - 1;
    }
};
