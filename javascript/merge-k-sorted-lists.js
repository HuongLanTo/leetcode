/**
 * Definition for singly-linked list.
 * function ListNode(val, next) {
 *     this.val = (val===undefined ? 0 : val)
 *     this.next = (next===undefined ? null : next)
 * }
 */
/**
 * @param {ListNode[]} lists
 * @return {ListNode}
 */
var mergeKLists = function(lists) {
    if (lists.length === 0) {
        return null;
    }

    while (lists.length > 1) {
        let list1 = lists.shift();
        let list2 = lists.shift();

        let mergedList = merge(list1, list2);
        lists.push(mergedList);
    }

    return lists[0];
};

var merge = function(list1, list2) {
    let listNode = new ListNode();
    let currentNode = listNode;

    while (list1 && list2) {
        if (list1.val <= list2.val) {
            currentNode.next = list1;
            list1 = list1.next;
        } else {
            currentNode.next = list2;
            list2 = list2.next;
        }
        currentNode = currentNode.next;
    }

    if (list1) {
        currentNode.next = list1;
    }

    if (list2) {
        currentNode.next = list2;
    }

    return listNode.next;
}