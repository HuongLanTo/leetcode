var isAnagram = function(s, t) {
    if (s.length !== t.length) {
        return false;
    }
    let sArr = s.split("").sort();
    let tArr = t.split("").sort();
    for (let i = 0; i < sArr.length; i++) {
        if (sArr[i] !== tArr[i]) {
            return false;
        }
    }
    return true;
};