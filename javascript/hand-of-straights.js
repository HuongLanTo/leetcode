/**
 * @param {number[]} hand
 * @param {number} groupSize
 * @return {boolean}
 */
var isNStraightHand = function(hand, groupSize) {
    if (groupSize === 1) {
        return true;
    }

    hand.sort((a, b) => a - b);
    let check = new Array(hand.length).fill(false);
    let start = 0;
    let end = 1;
    let count = 1;

    while (end < hand.length) {
        if (check[end]) {
            end++;
        } else {
            if (hand[end] === hand[start] + count) {
                check[end] = true;
                count++;
            } else if (hand[end] > hand[start] + count) {
                return false;
            } 
            let temp = hand[end];
            end++;
            while (end < hand.length && hand[end] === temp) {
                end++;
            }
        }

        if (count === groupSize) {
            check[start] = true;
            count = 1;
            while (start < hand.length && check[start]) {
                start++;
            }
            end = start + 1;
        }
    }

    for (let checkItem of check) {
        if (!checkItem) {
            return false;
        }
    }

    return true;
};