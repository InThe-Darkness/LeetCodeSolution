int uniquePaths(int m, int n){
    int ans[101][101] = {0};
    for(int i = 0; i <n; i++) ans[0][i] = 1;
    for(int j = 0; j < m; j++)ans[j][0] = 1;
    for(int i = 1; i <m; i++)
        for(int j = 1; j < n; j++)
            ans[i][j] = ans[i][j - 1] + ans[i -1][j];
    return ans[m - 1][n - 1];
}