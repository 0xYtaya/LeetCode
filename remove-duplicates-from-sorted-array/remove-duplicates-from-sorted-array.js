/**
 * @param {number[]} nums
 * @return {number}
 */
var removeDuplicates = function(arr) {
	arrD = []
	for (let i = 0; i < arr.length; i++) {
		if (arrD.indexOf(arr[i]) == -1)
			arrD.push(arr[i]);
	}
	for (let i = 0; i < arrD.length; i++)
		arr[i] = arrD[i]
	if (arrD.length == 0)
		return 0;
	return (arrD.length)
};