var validMountainArray = function(nums) {
    if (nums.length <= 2) return false;
	var i = 0;
	var j = nums.length - 1;
	while (nums[i] < nums[i + 1])
		i++;
    if (i == j) return false;
	while (nums[j] < nums[j - 1])
		j--;
    if (j == 0) return false;
	return (nums[i] == nums[j] && i == j);
};