void moveZeroes(int* nums, int numsSize){
    int i ,j;
    i = j = 0;
    
    while(i < numsSize)
    {
        if (nums[i] != 0)
            nums[j++] = nums[i];
        i++;
    }
    if (j < numsSize)
        bzero(nums + j, sizeof(int) * (numsSize - j));
}