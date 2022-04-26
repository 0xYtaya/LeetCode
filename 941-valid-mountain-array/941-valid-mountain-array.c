bool validMountainArray(int* nums, int arrSize){
    if (arrSize <= 2) return false;
	int i = 0;
	int j = arrSize - 1;
	while (i + 1 < arrSize && nums[i] < nums[i + 1])
		i++;
    if (i == j) return false;
	while (j - 1 >= 0 && nums[j] < nums[j - 1])
		j--;
    if (j <= 0) return false;
	return (nums[i] == nums[j] && i == j);
}