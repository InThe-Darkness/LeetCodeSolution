class Solution {
public:
    vector<int> printNumbers(int n) {
        vector<int> ans;
        for(int i = 1; i < pow(10, n); i++)
            ans.push_back(i);
        return ans;
    }
};