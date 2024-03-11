var maxArea = function(height) {
    let max = 0;
    let area = 0;
    let start = 0;
    let end = height.length - 1;
    while (start < end) {
        area = Math.min(height[start], height[end]) * (end - start);
        max = Math.max(area, max);
        if (height[start] < height[end]) {
            start++
        } else {
            end--;
        }
    }
    return max;
};