/**
 * @param {number[]} arr
 * @return {boolean}
 */
var checkIfExist = function(arr) {
	ret = false
	for (let i = 0; i < arr.length; i++) {
		for (let j = 0; j < arr.length; j++) {
			if (j != i && arr[i] == arr[j] * 2)
				return true;
		}
	}
    return ret
};