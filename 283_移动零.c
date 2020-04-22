void moveZeroes(int* nums, int numsSize){
    int i = 0;
    for(int j = 0; j < numsSize; j++){
        if(nums[j])nums[i++] = nums[j];
    }
    for(i; i < numsSize; i++)nums[i] = 0;
}