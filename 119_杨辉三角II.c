/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* getRow(int rowIndex, int* returnSize){
    rowIndex += 1;
    if(rowIndex == 0)return NULL;
    int *ans = (int *)malloc(sizeof(int) * rowIndex);
    *returnSize = rowIndex;
    //memset(ans, 1, sizeof(int) * rowIndex);这是一个常见的错误 DEBUG了半天才找到
    for(int i = 0; i < rowIndex; i++) ans[i] = 1;
    if(rowIndex < 3) return ans;
    int temp1, temp2;
    for(int i = 2; i < rowIndex; i++){
        temp1 = ans[0];
        temp2 = ans[1];
        for(int j = 1; j < i; j++){
            ans[j] = temp1 + temp2;
            temp1 = temp2;
            temp2 = ans[j + 1];
        }
    }
    return ans;
}