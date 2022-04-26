// int max(int* arr, int arrSize)
// {
//     if (arrSize == 1) return -1;
//     for (int i = 1 , max = arr[0];i< arrSize;i++)
//         if (max < arr[i])
//             max = arr[i];
//     return max;
// }

// int* replaceElements(int* arr, int arrSize, int* returnSize){
//     int *ret = malloc(sizeof(int) * arrSize);
//     if (ret)
//     {
//         for (int i = 1 , j = 0; i < arrSize;i++)
//             ret[j++] = max(arr + i,arrSize - 1);
//         *returnSize = arrSize;
//         free(arr);
//     }
//     return ret;
// }

var replaceElements = function(arr) {
    ret = []
    for (i = 1; i < arr.length ;i++)
    {
        let max;
        if (i < arr.length)  max = Math.max(...arr.slice(i));
        ret.push(max);
    }
    if (arr.length > 0)
        ret.push(-1)
    return ret;
};