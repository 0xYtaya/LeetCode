function missingNumber(nums: number[]): number {
  let total: number = (((nums.length - 1) + 1) * ((nums.length - 1) + 2)) / 2;
  let missing: number = nums.reduce((a, e) => a - e, total);
  return missing;
}
