/**
 * @param {string} pattern
 * @param {string} s
 * @return {boolean}
 */
var wordPattern = function(pattern, s) {
    let sArray = s.split(" ");
    if (pattern.length !== sArray.length) {
        return false;
    }
    if ((new Set(pattern)).size !== (new Set(sArray).size)) {
        return false;
    }
    const map = new Map();
    for (let i = 0; i < pattern.length; i++) {
        if (map.has(pattern[i]) && map.get(pattern[i]) !== sArray[i]) {
            return false;
        } else {
            map.set(pattern[i], sArray[i]);
        }
    }
    return true;
};