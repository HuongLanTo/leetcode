/**
 * @param {string} s
 * @return {number}
 */
var longestPalindrome = function(s) {
    let map = new Map();
    for (let i = 0; i < s.length; i++) {
        if (map.has(s[i])) {
            map.set(s[i], map.get(s[i]) + 1);
        } else {
            map.set(s[i], 1);
        }
    }

    let pairCount = 0;
    let isFirstAlone = true;
    map.forEach((value, key) => {
        pairCount+= value;
        if (value % 2 !== 0 && isFirstAlone) {
            isFirstAlone = false;
        } else if (value % 2 !== 0 && !isFirstAlone) {
            pairCount--;
        }
    })

    return pairCount;
};