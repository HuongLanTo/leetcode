/**
 * @param {number[]} nums
 * @param {number} target
 * @return {number}
 */
var search = function(nums, target) {
    let start = 0;
    let end = nums.length - 1;
    let temp = 0;
    while (start <= end) {
        temp = Math.floor((start + end) / 2)
        if (nums[temp] === target) {
            return temp;
        } else if (target < nums[temp]) {
            end = temp - 1;
        } else {
            start = temp + 1;
        }
    }
    return -1;
};