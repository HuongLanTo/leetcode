class Node {
    constructor(val) {
        this.val = val;
        this.prev = null;
        this.next = null;
    }
}

var MyLinkedList = function() {
    this.head = null;
    this.tail = null;
    this.length = 0;
};

/** 
 * @param {number} index
 * @return {number}
 */
MyLinkedList.prototype.get = function(index) {
    if (index < 0 || index >= this.length) {
        return -1;
    }
    let current = this.head;
    let count = 0;
    while (count !== index) {
        current = current.next;
        count++;
    } 
    return current.val;
};

/** 
 * @param {number} val
 * @return {void}
 */
MyLinkedList.prototype.addAtHead = function(val) {
    let node = new Node(val);
    if (this.length === 0) {
        this.head = node;
        this.tail = node;
    } else {
        this.head.prev = node;
        node.next = this.head;
        this.head = node;
    }
    this.length++;
};

/** 
 * @param {number} val
 * @return {void}
 */
MyLinkedList.prototype.addAtTail = function(val) {
    let node = new Node(val);
    if (this.length === 0) {
        this.head = node;
        this.tail = node;
    } else {
        this.tail.next = node;
        node.prev = this.tail;
        this.tail = node;
    }
    this.length++;
};

/** 
 * @param {number} index 
 * @param {number} val
 * @return {void}
 */
MyLinkedList.prototype.addAtIndex = function(index, val) {
    if (index < 0 || index > this.length) {
        return;
    }

    if (index === 0) {
        this.addAtHead(val);
    } else if (index === this.length) {
        this.addAtTail(val);
    } else {
        let node = new Node(val);
        let current = this.head.next;
        let count = 1;
        while (count !== index) {
            count++;
            current = current.next;
        }
        current.prev.next = node;
        node.prev = current.prev;
        node.next = current;
        current.prev = node;
        this.length++;
    }
};

/** 
 * @param {number} index
 * @return {void}
 */
MyLinkedList.prototype.deleteAtIndex = function(index) {
    if (index < 0 || index >= this.length) {
        return;
    }

    if (index === 0 && this.length === 1) {
        this.head = null;
        this.tail = null;
    } else if (index === 0) {
        this.head = this.head.next;
        this.head.prev = null;
    } else if (index === this.length - 1) {
        this.tail = this.tail.prev;
        this.tail.next = null;
    } else {
        let current = this.head.next;
        let count = 1;
        while (count !== index) {
            count++;
            current = current.next;
        }
        current.prev.next = current.next;
        current.next.prev = current.prev;
    }
    this.length--;
};

/** 
 * Your MyLinkedList object will be instantiated and called as such:
 * var obj = new MyLinkedList()
 * var param_1 = obj.get(index)
 * obj.addAtHead(val)
 * obj.addAtTail(val)
 * obj.addAtIndex(index,val)
 * obj.deleteAtIndex(index)
 */