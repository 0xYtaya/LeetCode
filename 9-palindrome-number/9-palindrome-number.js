var isPalindrome = function(x) {
    x =x.toString().split('');
    return (x.every((e,i) =>  e == x[x.length - i - 1]))
};