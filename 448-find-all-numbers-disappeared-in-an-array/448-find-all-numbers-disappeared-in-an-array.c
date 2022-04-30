
int* findDisappearedNumbers(int* nums, int numsSize, int* returnSize){
	int *missing;

	for (int i = 0; i < numsSize; i++)
	{
		int index = abs(nums[i]) -1;
		nums[index] = -abs(nums[index]);
	}
	int size = 0;
	for (int i = 0; i < numsSize; i++)
		if (nums[i] > 0)
			size++;
	missing = (int*) malloc(sizeof(int) * size);
	for (int i = 0,j = 0; i < numsSize; i++)
		if (nums[i] > 0)
			missing[j++] = i + 1;
	*returnSize = size;
	free(nums);
	return missing;
}