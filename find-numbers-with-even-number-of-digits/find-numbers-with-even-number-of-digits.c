int numberLength(int x){
    int counter = 0;
    while(x > 0)
    {
        counter++;
        x = x / 10;
    }
    return counter;
}

int findNumbers(int* nums, int numsSize){
    int  count = 0;
    for (int i = 0; i < numsSize;i++)
        if (numberLength(nums[i]) % 2 == 0) count++;
    return count;
}