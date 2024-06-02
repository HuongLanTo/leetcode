/**
 * @param {number[]} stones
 * @return {number}
 */
var lastStoneWeight = function(stones) {
    let maxPriorityQueue = new MaxPriorityQueue();

    for (let stone of stones) {
        maxPriorityQueue.enqueue(stone);
    }

    while (maxPriorityQueue.size() > 1) {
        let [firstElement, secondElement] = [maxPriorityQueue.dequeue().element, maxPriorityQueue.dequeue().element];
        let difference = firstElement - secondElement;

        if (difference > 0) {
            maxPriorityQueue.enqueue(difference);
        }
    }

    return maxPriorityQueue.size() === 1 ? maxPriorityQueue.dequeue().element : 0;
};