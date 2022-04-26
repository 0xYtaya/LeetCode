var replaceElements = function(arr) {
    ret = []
    for (i = 1; i < arr.length ;i++)
        ret.push(Math.max(...arr.slice(i)))
    if (arr.length > 0)
        ret.push(-1)
    return ret;
};