int rob(int* nums, int numsSize){
    if(numsSize == 0)return 0;
    int sum[2] = {0, nums[0]};
    int temp = sum[0];
    for(int i = 1; i < numsSize; i++){
        sum[0] = sum[0] > sum[1] ? sum[0] : sum[1];
        sum[1] = nums[i] + temp;
        temp = sum[0];
    }   
    return sum[0] > sum[1] ? sum[0] : sum[1];
}