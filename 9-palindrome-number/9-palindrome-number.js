var spreadNumberToArray = function(x){
	let arr = []
	while (x !== 0){
		arr.push(x % 10);
		x = Math.floor(x / 10);
	}
	return arr.reverse();
}

var isPalindrome = function(x) {
	if (x < 0) return false;
	else
		x = spreadNumberToArray(x)
    return (x.every((e,i) =>  e == x[x.length - i - 1]))
};