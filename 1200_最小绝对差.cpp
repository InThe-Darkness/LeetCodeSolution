class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        sort(arr.begin(), arr.end());
        vector<vector<int>> ans;
        int mindis = 0x7fffffff;
        for(int i = 1; i < arr.size(); i++)
            mindis = min(arr[i] - arr[i - 1], mindis);
        for(int i = 1; i < arr.size(); i++)
            if(arr[i] - arr[i - 1] == mindis){
                ans.push_back(vector<int>());
                ans.back().push_back(arr[i - 1]);
                ans.back().push_back(arr[i]);
            }
        return ans;
    }
};