/**
 * @param {number[]} piles
 * @param {number} h
 * @return {number}
 */
var minEatingSpeed = function(piles, h) {
    let low = 1;
    let high = Math.max(...piles);
    let mid = 1;
    while (low <= high) {
        mid = Math.floor((low + high) / 2);
        if (canEatAll(piles, mid, h)) {
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }
    return low;
};

var canEatAll = function(piles, k, h) {
    let totalTime = 0;
    for (let pile of piles) {
        totalTime+= Math.ceil(pile / k);
    }
    return totalTime <= h;
}