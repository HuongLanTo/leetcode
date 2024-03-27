/**
 * @param {number[][]} matrix
 * @param {number} target
 * @return {boolean}
 */
var searchMatrix = function(matrix, target) {
    let low = 0; 
    let high = matrix.length - 1;
    let mid = 0;
    while (low <= high) {
        mid = Math.floor((low + high) / 2);
        if (target < matrix[mid][0]) {
            high = mid - 1;
        } else if (target > matrix[mid][matrix[mid].length - 1]) {
            low = mid + 1; 
        } else {
            let secLow = 0;
            let secHigh = matrix[mid].length - 1;
            let secMid = 0;
            while (secLow <= secHigh) {
                secMid = Math.floor((secLow + secHigh) / 2);
                if (target === matrix[mid][secMid]) {
                    return true;
                } else if (target < matrix[mid][secMid]) {
                    secHigh = secMid - 1;
                } else {
                    secLow = secMid + 1;
                }
            }
            break;
        }
    }
    return false;
};