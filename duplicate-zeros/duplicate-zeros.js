var duplicateZeros = function(arr) {
    let arrDup = []
    for (i = 0; i < arr.length ;i++)
    {
        if (arr[i] != 0)
            arrDup.push(arr[i])
        else
            arrDup.push(arr[i],0)
    }
    for (let i =0 ; i< arr.length ; i++)
        arr[i] = arrDup[i]
};