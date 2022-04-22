void quicksort(int *number,int first,int last){
   int i, j, pivot, temp;
   if(first<last){
      pivot=first;
      i=first;
      j=last;
      while(i<j){
         while(number[i]<=number[pivot]&&i<last)
         i++;
         while(number[j]>number[pivot])
         j--;
         if(i<j){
            temp=number[i];
            number[i]=number[j];
            number[j]=temp;
         }
      }
      temp=number[pivot];
      number[pivot]=number[j];
      number[j]=temp;
      quicksort(number,first,j-1);
      quicksort(number,j+1,last);
   }
}

int* sortedSquares(int* nums, int numsSize, int* returnSize)
{
	int i, j, k;
	int *result;
	result = (int*)malloc(sizeof(int)*numsSize);
	for(i = 0; i < numsSize; i++)
	{
		result[i] = nums[i] * nums[i];
	}
	quicksort(result, 0, numsSize - 1);
	*returnSize = numsSize;
	return result;
}