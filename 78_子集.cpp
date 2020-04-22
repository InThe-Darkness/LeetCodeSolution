class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        int n = nums.size();
        n = 1<<n;
        for(int i = 0; i < n; i++){
            ans.push_back(vector<int>());
            for(int j = 0; j < nums.size(); j++)
                if(i & (1<<j)) ans[i].push_back(nums[j]);
        }
        return ans;
    }
};