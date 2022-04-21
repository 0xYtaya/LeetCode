var isPalindrome = function(s) {
    let arr
    if (s.match(/[a-z0-9]/gi) != null)
    {
        arr = s.match(/[a-z0-9]/gi).join('').toLowerCase().split('');
        return arr.every((e,i) => e === arr[arr.length - 1 - i]);
    }
    return true   
};