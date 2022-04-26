

bool checkIfExist(int* arr, int arrSize){
	bool ret = false;
	for (int i = 0; i < arrSize; i++) {
		for (int j = 0; j < arrSize; j++) {
			if (j != i && arr[i] == arr[j] * 2)
				return true;
		}
    }
    return ret;
}