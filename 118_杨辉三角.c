/**
 * Return an array of arrays of size *returnSize.
 * The sizes of the arrays are returned as *returnColumnSizes array.
 * Note: Both returned array and *columnSizes array must be malloced, assume caller calls free().
 */
int** generate(int numRows, int* returnSize, int** returnColumnSizes){
    *returnSize = numRows;
    *returnColumnSizes = (int *)malloc(numRows * sizeof(int));
    int **ans = (int **)malloc(numRows * sizeof(int *));
    for(int i = 0; i < numRows; i++){
        (*returnColumnSizes)[i] = i + 1;
        ans[i] = (int *)malloc((i + 1) * sizeof(int));
        ans[i][0] = ans[i][i] = 1;
    }

    for(int i = 2; i < numRows; i++)
        for(int j = 1; j < i; j++)
            ans[i][j] = ans[i - 1][j] + ans[i - 1][j - 1];
    return ans;
}