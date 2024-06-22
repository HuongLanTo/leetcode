/**
 * @param {number[]} position
 * @param {number} m
 * @return {number}
 */
var maxDistance = function(position, m) {
    position.sort((a, b) => a - b);
    let result = -1;
    let left = 1, right = position[position.length - 1] - position[0];
    while (left <= right) {
        let mid = left + Math.floor((right - left) / 2);
        let lastPosition = position[0], balls = 1;

        for (let i = 1; i < position.length; i++) {
            if (position[i] - lastPosition >= mid) {
                lastPosition = position[i];
                balls++;
            }
        }
        if (balls >= m) {
            result = mid;
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    return result;
};