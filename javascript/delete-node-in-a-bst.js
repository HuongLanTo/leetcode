/**
 * Definition for a binary tree node.
 * function TreeNode(val, left, right) {
 *     this.val = (val===undefined ? 0 : val)
 *     this.left = (left===undefined ? null : left)
 *     this.right = (right===undefined ? null : right)
 * }
 */
/**
 * @param {TreeNode} root
 * @param {number} key
 * @return {TreeNode}
 */
var deleteNode = function(root, key) {
    if (root === null) {
        return null;
    }
    
    if (key > root.val) {
        root.right = deleteNode(root.right, key);
    } else if (key < root.val) {
        root.left = deleteNode(root.left, key);
    } else {
        if (root.left === null) {
            return root.right;
        } else if (root.right === null) {
            return root.left;
        } else {
            let minNodeValue = getMinNodeValue(root.right);
            root.val = minNodeValue;
            root.right = deleteNode(root.right, minNodeValue);
        }
    }
    return root;
};

var getMinNodeValue = function(root) {
    let curr = root;
    while (curr !== null && curr.left !== null) {
        curr = curr.left;
    }
    return curr.val;
}