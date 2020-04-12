int searchInsert(int* nums, int numsSize, int target){
    int ans = 0;
    for(;ans < numsSize; ans++)
        if(nums[ans] == target || nums[ans] > target)
            return ans;
    return ans;
}