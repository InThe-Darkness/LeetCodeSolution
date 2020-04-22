int findPeakElement(int* nums, int numsSize){
    if(numsSize == 1) return 0;
    if(numsSize == 2) return nums[0] > nums[1] ? 0 : 1;
    for(int i = 1; i < numsSize - 1; i++){
        if(nums[i] > nums[i - 1] && nums[i] > nums[i + 1])return i;
    }
   return nums[0] > nums[numsSize - 1] ? 0 : numsSize - 1;
}