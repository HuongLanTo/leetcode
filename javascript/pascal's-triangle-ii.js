/**
 * @param {number} rowIndex
 * @return {number[]}
 */
var getRow = function(rowIndex) {
    let oldArr = [];
    let newArr = [1];
    for (let i = 0; i < rowIndex; i++) {
        oldArr = [...newArr];
        newArr = [];
        if (oldArr.length === 1) {
            newArr = [1, 1];
        } else {
            for (let j = 0; j < oldArr.length; j++) {
                if (j === 0 || j === oldArr.length - 1) {
                    newArr.push(oldArr[j]);
                }
                if (j !== oldArr.length - 1) {
                    newArr.push(oldArr[j] + oldArr[j + 1]);
                }
            }
        }
    }

    return newArr;
};