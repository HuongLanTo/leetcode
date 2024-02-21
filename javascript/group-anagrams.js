var groupAnagrams = function(strs) {
    let result = [];
    let map = new Map();
    let count = 0;
    for (let i = 0; i < strs.length; i++) {
        let temp = strs[i].split("").sort().join("");
        if (!map.has(temp)) {
            map.set(temp, count);
            count++;
            result.push([strs[i]]);
        } else {
            result[map.get(temp)].push(strs[i]);
        }
    }
    return result;
};