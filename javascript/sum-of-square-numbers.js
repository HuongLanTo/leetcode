/**
 * @param {number} c
 * @return {boolean}
 */
var judgeSquareSum = function(c) {
    let start = 0;
    let end = Math.floor(Math.sqrt(c));

    while (start <= end) {
        let sum = start * start + end * end;
        if (sum < c) {
            start++;
        } else if (sum > c) {
            end--;
        } else {
            return true;
        }
    }
    
    return false;
};