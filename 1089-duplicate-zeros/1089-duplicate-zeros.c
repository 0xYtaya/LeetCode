

void duplicateZeros(int* arr, int arrSize){
	int arrD[arrSize * 2];

	for (int i = 0 , j = 0; i < arrSize; i++) {
		if (arr[i] != 0)
			arrD[j++] = arr[i];
		else
		{
			arrD[j++] = arr[i];
			arrD[j++] = 0;
		}
	}
	for (int i = 0; i < arrSize; i++)
		if (arr[i] != arrD[i])
			arr[i] = arrD[i];
}