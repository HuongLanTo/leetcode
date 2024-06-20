/**
 * @param {number[]} bloomDay
 * @param {number} m
 * @param {number} k
 * @return {number}
 */
var minDays = function(bloomDay, m, k) {
    if (m * k > bloomDay.length) {
        return -1;
    }
    
    let low = 1, high = Math.max(...bloomDay);
    while (low < high) {
        let mid = Math.floor((low + high) / 2);
        if (canMakeBouquets(bloomDay, m, k, mid)) {
            high = mid;
        } else {
            low = mid + 1;
        }
    }

    return low;
};

var canMakeBouquets = (bloomDay, m, k, day) => {
    let bouquets = 0, flowers = 0;
    for (let b of bloomDay) {
        if (b <= day) {
            flowers++;
            if (flowers === k) {
                bouquets++;
                flowers = 0;
            }
            if (bouquets === m) {
                return true;
            }
        } else {
            flowers = 0;
        }
    }

    return false;
}