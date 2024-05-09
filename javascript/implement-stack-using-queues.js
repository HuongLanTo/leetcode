class Node {
    constructor(val) {
        this.val = val;
        this.prev = null;
        this.next = null;
    }
}

var MyStack = function() {
    this.head = null;
    this.length = 0;
};

/** 
 * @param {number} x
 * @return {void}
 */
MyStack.prototype.push = function(x) {
    let node = new Node(x);
    if (this.empty()) {
        this.head = node;
    } else {
        this.head.prev = node;
        node.next = this.head;
        this.head = node;
    }
    this.length++;
};

/**
 * @return {number}
 */
MyStack.prototype.pop = function() {
    if (this.empty()) {
        return null;
    }
    let val = this.head.val;
    if (this.length === 1) {
        this.head = null;
    } else {
        this.head.next.prev = null;
        this.head = this.head.next;
    }
    this.length--;
    return val;
};

/**
 * @return {number}
 */
MyStack.prototype.top = function() {
    if (this.empty()) {
        return null;
    }
    return this.head.val;
};

/**
 * @return {boolean}
 */
MyStack.prototype.empty = function() {
    return !this.length;
};

/** 
 * Your MyStack object will be instantiated and called as such:
 * var obj = new MyStack()
 * obj.push(x)
 * var param_2 = obj.pop()
 * var param_3 = obj.top()
 * var param_4 = obj.empty()
 */