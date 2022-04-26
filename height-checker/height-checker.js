/**
 * @param {number[]} heights
 * @return {number}
 */
var heightChecker = function(heights) {
	let count = 0;
	arrS = [...heights].sort((a,b)=> a-b)
    for (let i = 0; i < heights.length; i++) {
		if (heights[i] != arrS[i])
			count++;
	}
	return count;
};