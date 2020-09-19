class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        int dirt[4][2] = {{0, 1}, {1, 0}, {0, -1}, {-1, 0}};
        int row = 0, column = -1;
        vector<vector<int>> ans(n, vector<int>(n, 0));
        int dirt_ = 0;
        for(int i = 1; i <= n * n; i++){
            if(row + dirt[dirt_][0] >= n || column + dirt[dirt_][1] >= n || column + dirt[dirt_][1] < 0 || ans[row + dirt[dirt_][0]][column + dirt[dirt_][1]]) 
                dirt_ = (dirt_ + 1) % 4;
            row += dirt[dirt_][0];
            column += dirt[dirt_][1];
            ans[row][column] = i;
            //cout << row << " " << column << " " << i << endl;
        }
        return ans;
    }
};