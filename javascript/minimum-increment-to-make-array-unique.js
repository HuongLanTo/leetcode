/**
 * @param {number[]} nums
 * @return {number}
 */
var minIncrementForUnique = function(nums) {
    nums.sort((a, b) => a - b);
    let count = 0;
    let maxEle = 0;
    for (let num of nums) {
        maxEle = Math.max(maxEle, num);
        count+= (maxEle - num);
        maxEle++;
    }
    
    return count;
};