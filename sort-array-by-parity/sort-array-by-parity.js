/**
 * @param {number[]} nums
 * @return {number[]}
 */
var sortArrayByParity = function(nums) {
    return ([...nums.filter(e=>e%2==0).sort((a,b)=>a-b),...nums.filter(e=>e%2).sort((a,b)=>a-b)])
};