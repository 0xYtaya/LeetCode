var reverseString = function(s) {
    for (i = 0, len = s.length - 1; i < len ;i++,len--)
    {
        let tmp = s[i];
        s[i] = s[len];
        s[len] = tmp;
    }
};