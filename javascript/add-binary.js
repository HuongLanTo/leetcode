/**
 * @param {string} a
 * @param {string} b
 * @return {string}
 */
var addBinary = function(a, b) {
    let aIndex = a.length - 1;
    let bIndex = b.length - 1;
    let carry = 0;
    let result = "";

    while (aIndex >= 0 || bIndex >= 0 || carry) {
        let sum = carry;
        if (aIndex >= 0) {
            sum+= (a[aIndex--] - '0');
        }
        if (bIndex >= 0) {
            sum+= (b[bIndex--] - '0');
        }
        result = (sum % 2) + result;
        carry = Math.floor(sum / 2);
    }

    return result;
};