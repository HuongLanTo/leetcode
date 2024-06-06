/**
 * Definition for singly-linked list.
 * function ListNode(val, next) {
 *     this.val = (val===undefined ? 0 : val)
 *     this.next = (next===undefined ? null : next)
 * }
 */
/**
 * @param {ListNode} head
 * @return {number}
 */
var pairSum = function(head) {
    let [slow, fast] = [head, head];
    let reverse = null;

    while (fast && fast.next) {
        fast = fast.next.next;
        let temp = slow.next;
        slow.next = reverse;
        reverse = slow;
        slow = temp;
    }

    let first = reverse;
    let second = slow;
    let maxSum = Number.NEGATIVE_INFINITY;

    while (first && second) {
        if (maxSum < first.val + second.val) {
            maxSum = first.val + second.val;
        }
        first = first.next;
        second = second.next;
    }

    return maxSum;
};