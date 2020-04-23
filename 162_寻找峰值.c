int findPeakElement(int* nums, int numsSize){
    if(numsSize == 1) return 0;
    if(numsSize == 2) return nums[0] > nums[1] ? 0 : 1;
    for(int i = 1; i < numsSize - 1; i++){
        if(nums[i] > nums[i - 1] && nums[i] > nums[i + 1])return i;
    }
   return nums[0] > nums[numsSize - 1] ? 0 : numsSize - 1;
}

//solution2:
int findPeakElement(int* nums, int numsSize){
    int left = 0, right = numsSize - 1, mid;
    while(left < right){
        mid = (left + right) / 2;
        if(nums[mid] > nums[mid + 1]) right = mid;
        else left = mid + 1;
    }
    return left;
}