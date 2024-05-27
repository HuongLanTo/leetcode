/**
 * @param {number[]} nums
 * @return {number[][]}
 */
var subsetsWithDup = function(nums) {
    nums.sort();
    let curSet = [];
    let subsets = [];
    helper(0, nums, curSet, subsets);
    return subsets;
};

function helper(i, nums, curSet, subsets) {
    if (i >= nums.length) {
        subsets.push([...curSet]);
        return;
    }

    curSet.push(nums[i]);
    helper(i + 1, nums, curSet, subsets);
    curSet.pop();

    while (i + 1 < nums.length && nums[i] === nums[i + 1]) {
        i++;
    }
    helper(i + 1, nums, curSet, subsets);
}