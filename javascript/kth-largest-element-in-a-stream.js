/**
 * @param {number} k
 * @param {number[]} nums
 */
var KthLargest = function(k, nums) {
    this.heap = new MinPriorityQueue();
    this.k = k;
    for (let num of nums) {
        this.add(num);
    }
};

/** 
 * @param {number} val
 * @return {number}
 */
KthLargest.prototype.add = function(val) {
    if (this.heap.size() < this.k) {
        this.heap.enqueue(val);
    } else {
        let minElement = this.heap.dequeue().element;
        if (val > minElement) {
            this.heap.enqueue(val);
        } else {
            this.heap.enqueue(minElement);
        }
    }

    let kLargest = this.heap.dequeue().element;
    this.heap.enqueue(kLargest);
    return kLargest;
};

/** 
 * Your KthLargest object will be instantiated and called as such:
 * var obj = new KthLargest(k, nums)
 * var param_1 = obj.add(val)
 */