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
 * @param {number} targetSum
 * @return {boolean}
 */
var hasPathSum = function(root, targetSum) {
    let sum = 0;
    let array = [];
    
    function helper(root) {
        if (root === null) {
            return false;
        }
        array.push(root.val);
        sum+= root.val;

        if (root.left === null && root.right === null && sum === targetSum) {
            return true;
        }
        if (helper(root.left)) {
            return true;
        }
        if (helper(root.right)) {
            return true;
        }
        sum-= array.pop();
        return false;
    }

    return helper(root);
};