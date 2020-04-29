class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int ans = 0;
        for(auto line : grid)
            for(auto item : line)
                if(item < 0) ans++;
        return ans;
    }
};