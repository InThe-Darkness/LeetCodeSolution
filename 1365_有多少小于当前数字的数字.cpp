class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> ans(nums.size(), 0);
        int i = 0;
        auto ifmin =[&](int num){
            return num < nums[i];
        };
        for(; i < nums.size(); i++)
            ans[i] = count_if(nums.begin(), nums.end(), ifmin);
        return ans;
    }
};