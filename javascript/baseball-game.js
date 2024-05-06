/**
 * @param {string[]} operations
 * @return {number}
 */
var calPoints = function(operations) {
    let stack = [];
    let sum = 0;
    let temp;
    for (let i = 0; i < operations.length; i++) {
        switch (operations[i]) {
            case '+':
                temp = stack[stack.length - 1] + stack[stack.length - 2];
                stack.push(temp);
                sum+= temp;
                break;
            case 'D':
                stack.push(2 * stack[stack.length - 1]);
                sum+= stack[stack.length - 1];
                break;
            case 'C':
                temp = stack.pop();
                sum-= temp;
                break;
            default:
                stack.push(parseInt(operations[i]));
                sum+= stack[stack.length - 1];
                break;
        }
    }
    return sum;
};