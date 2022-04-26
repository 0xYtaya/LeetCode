// unsorted array

// var removeDuplicates = function(arr) {
// 	arrD = []
// 	for (let i = 0; i < arr.length; i++) {
// 		if (arrD.indexOf(arr[i]) == -1)
// 			arrD.push(arr[i]);
// 	}
// 	for (let i = 0; i < arrD.length; i++)
// 		arr[i] = arrD[i]
// 	return (arrD.length)
// };

//sorted arry

var removeDuplicates = function(arr) {
	arrD = []
	for (let i = 0; i < arr.length; i++) {
		if (arr[i] !== arr[i + 1])
			arrD.push(arr[i]);
	}
	for (let i = 0; i < arrD.length; i++)
		arr[i] = arrD[i]
	return (arrD.length)
};