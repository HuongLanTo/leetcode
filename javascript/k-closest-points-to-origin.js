/**
 * @param {number[][]} points
 * @param {number} k
 * @return {number[][]}
 */
var kClosest = function(points, k) {
    let maxHeap = new MaxPriorityQueue();

    for (let point of points) {
        let distance = point[0] * point[0] + point[1] * point[1];
        if (maxHeap.size() < k) {
            maxHeap.enqueue(point, distance);
        } else if (distance < maxHeap.front().priority) {
            maxHeap.dequeue();
            maxHeap.enqueue(point, distance);
        }
    }

    return maxHeap.toArray().map((heapItem) => heapItem.element);
};