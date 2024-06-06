/**
 * Definition for singly-linked list.
 * function ListNode(val) {
 *     this.val = val;
 *     this.next = null;
 * }
 */

/**
 * @param {ListNode} head
 * @return {ListNode}
 */
var detectCycle = function(head) {
    let [slow, fast] = [head, head];

    while (fast && fast.next) {
        slow = slow.next;
        fast = fast.next.next;

        if (slow === fast) {
            let slow2 = head;
            while (slow2 !== slow) {
                slow = slow.next;
                slow2 = slow2.next;
            }
            return slow;
        }
    }

    return null;
};