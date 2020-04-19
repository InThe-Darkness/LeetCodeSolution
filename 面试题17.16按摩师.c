int massage(int* nums, int numsSize){
    if(numsSize == 0)return 0;
    int tag[2] = {0, nums[0]};
    int temp = tag[0];
    for(int i = 1; i < numsSize; i++){
        tag[0] = tag[0] > tag[1] ? tag[0] : tag[1];
        tag[1] = nums[i] + temp;
        temp = tag[0];
    }   
    return tag[0] > tag[1] ? tag[0] : tag[1];
}