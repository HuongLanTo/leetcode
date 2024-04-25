/**
 * @param {number[]} nums
 * @return {number}
 */
var longestConsecutive = function(nums) {
    const set = new Set();
    let max = 0;
    let count = 1;
    let curValue;
    for (let i = 0; i < nums.length; i++) {
        set.add(nums[i]);
    }
    for (let item of set) {
        if (set.has(item - 1)) {
            continue;
        }
        count = 1;
        curValue = item + 1;
        while (set.has(curValue)) {
            count++;
            curValue++;
        }
        max = Math.max(max, count);
    }
    return max;
};