/**
 * @param {number} n
 * @param {number} k
 * @return {number[][]}
 */
var combine = function(n, k) {
    let combs = [];
    helper(1, [], combs, n, k);
    return combs;
};

var helper = function(i, curComb, combs, n, k) {
    if (curComb.length === k) {
        combs.push([...curComb]);
        return;
    }
    if (i > n) {
        return;
    }

    for (let j = i; j <= n; j++) {
        curComb.push(j);
        helper(j + 1, curComb, combs, n, k);
        curComb.pop();
    }
}