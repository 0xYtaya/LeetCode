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