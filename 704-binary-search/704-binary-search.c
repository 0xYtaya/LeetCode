

int search(int* nums, int numsSize, int target){
    int min = 0;
    int max = numsSize - 1;
    int mid;
    
    while (max >= min)
    {
        mid = (max + min) / 2;
        if (nums[min] == target)
            return (min);
        else if (nums[max] == target)
            return (max);
        else if (nums[mid] == target)
            return (mid);
        if (nums[mid] < target)
            min =  mid + 1;
        else
            max = mid - 1;
    }
    return (-1);
}