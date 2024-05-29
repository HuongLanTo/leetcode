/**
 * @param {string} digits
 * @return {string[]}
 */
var letterCombinations = function(digits) {
    var data = {
        "2": "abc",
        "3": "def",
        "4": "ghi",
        "5": "jkl",
        "6": "mno",
        "7": "pqrs",
        "8": "tuv",
        "9": "wxyz"
    }
    let combs = [];
    if (digits) {
        helper(0, digits, [], combs, data);
    }
    return combs;
};

var helper = function(i, digits, curComb, combs, data) {
    if (curComb.length === digits.length) {
        combs.push(curComb);
        return;
    }

    for (let c of data[digits[i]]) {
        helper(i + 1, digits, curComb + c, combs, data);
    }
}