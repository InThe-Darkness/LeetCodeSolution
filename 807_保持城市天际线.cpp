class Solution {
public:
    int maxIncreaseKeepingSkyline(vector<vector<int>>& grid) {
        vector<vector<int>> line(2, vector<int>());
        int ans = 0;
        for(int i = 0; i < grid[0].size(); i++)
            line[0].push_back(grid[0][i]);
        for(int i = 0; i < grid[0].size(); i++)
            line[1].push_back(grid[i][0]);

        for(int i = 0; i < grid.size(); i++){
            for(int j = 0; j < grid[i].size(); j++){
                if(grid[i][j] > line[1][i]) line[1][i] = grid[i][j];
                if(grid[i][j] > line[0][j]) line[0][j] = grid[i][j];
            }
        }

        for(int i = 0; i < grid.size(); i++)
            for(int j = 0; j < grid[i].size(); j++)
                if(grid[i][j] < min(line[1][i], line[0][j])) 
                    ans += min(line[1][i], line[0][j]) - grid[i][j];

        return ans;
    }
};