int* replaceElements(int* arr, int arrSize, int* returnSize){
    int *ret = (int *) malloc(sizeof(int) * arrSize);
    if (ret)
    {
        for (int i = arrSize - 1, max = -1 , tmp ; i >= 0;i--)
        {
            tmp = arr[i];
            ret[i] = max;
            if (tmp > max)
                max = tmp;
        }
        *returnSize = arrSize;
        free(arr);
    }
    return ret;
}