/**
 * @param {string} s
 * @return {number}
 */
var lengthOfLastWord = function(s) {
    let array = (s.trim()).split(" ");
    return array[array.length - 1].length;
};