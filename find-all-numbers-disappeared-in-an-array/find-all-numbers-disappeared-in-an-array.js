const abs = (x) => (x < 0) ? -x : x

var findDisappearedNumbers = function(nums) {
    let disappeared = []
	for (let i = 0; i < nums.length; i++) {
		index = abs(nums[i]) - 1;
		nums[index] = -abs(nums[index]);
	}
	for (let i = 0; i < nums.length; i++) {
		if (nums[i] > 0)
			disappeared.push(i + 1);
	}
	return disappeared;
};