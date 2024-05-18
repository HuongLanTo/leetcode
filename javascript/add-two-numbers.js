/**
 * Definition for singly-linked list.
 * function ListNode(val, next) {
 *     this.val = (val===undefined ? 0 : val)
 *     this.next = (next===undefined ? null : next)
 * }
 */
/**
 * @param {ListNode} l1
 * @param {ListNode} l2
 * @return {ListNode}
 */
var addTwoNumbers = function(l1, l2) {
    let listNode = new ListNode();
    let current = listNode;
    let array = [];
    let carry = 0;

    while (l1 && l2) {
        let temp = l1.val + l2.val + carry;
        if (temp > 9) {
            carry = Math.floor(temp / 10);
        } else {
            carry = 0;
        }
        array.push(temp % 10);
        l1 = l1.next;
        l2 = l2.next;
    }

    while (l1) {
        let temp = l1.val + carry;
        if (temp > 9) {
            carry = Math.floor(temp / 10);
        } else {
            carry = 0;
        }
        array.push(temp % 10);
        l1 = l1.next;
    }

    while (l2) {
        let temp = l2.val + carry;
        if (temp > 9) {
            carry = Math.floor(temp / 10);
        } else {
            carry = 0;
        }
        array.push(temp % 10);
        l2 = l2.next;
    } 
    
    if (carry > 0) {
        array.push(carry);
    }

    for (let i = 0; i < array.length; i++) {
        current.next = new ListNode(array[i]);
        current = current.next;
    }

    return listNode.next;
};