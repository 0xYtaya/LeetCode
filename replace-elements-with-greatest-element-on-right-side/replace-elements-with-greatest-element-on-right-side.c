int max(int* arr, int arrSize)
{
	int  ret_max = *arr;
    for (int i = 1 ;i< arrSize;i++)
        if (ret_max < arr[i])
            ret_max = arr[i];
    return ret_max;
}

int* replaceElements(int* arr, int arrSize, int* returnSize){
    int *ret = (int *) malloc(sizeof(int) * arrSize);
    if (ret)
    {
        int j = 0;
        for (int i = 1; i < arrSize;i++)
            ret[j++] = max(&arr[i],arrSize - i);
        *returnSize = arrSize;
        if (arrSize >= 1)
            ret[j] = -1;
        free(arr);
    }
    return ret;
}