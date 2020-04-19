int minimumTotal(int** triangle, int triangleSize, int* triangleColSize){
    int m = triangleSize;
    for(int i = 1; i < m; i ++){
        triangle[i][0] += triangle[i - 1][0];
        triangle[i][i] += triangle[i - 1][i - 1];
    }
    for(int i = 2; i < m; i++)
        for(int j = 1; j < i; j++)
            triangle[i][j] += triangle[i - 1][j] > triangle[i - 1][j - 1] ? triangle[i - 1][j - 1] : triangle[i - 1][j];
    int ans = triangle[m - 1][0];
    for(int i = 0; i < m; i++)
        if(triangle[m - 1][i] < ans) ans = triangle[m - 1][i];
    return ans;
}