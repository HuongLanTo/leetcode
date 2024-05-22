/**
 * @param {number[]} nums
 * @return {number[][]}
 */
var subsets = function(nums) {
    let result = [];
    let curSet = [];
    helper(0, nums, curSet, result);
    return result;
};

function helper(i, nums, curSet, subsets) {
    if (i >= nums.length) {
        subsets.push([...curSet]);
        return;
    }

    curSet.push(nums[i]);
    helper(i + 1, nums, curSet, subsets);
    curSet.pop();

    helper(i + 1, nums, curSet, subsets);
}