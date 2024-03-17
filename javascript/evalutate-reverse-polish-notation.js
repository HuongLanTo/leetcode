/**
 * @param {string[]} tokens
 * @return {number}
 */
var evalRPN = function(tokens) {
    let stack = [];
    for (let i = 0; i < tokens.length; i++) {
        if (!isNaN(tokens[i])) {
            stack.push(Number(tokens[i]));
        } else {
            let val1 = stack.pop();
            let val2 = stack.pop();
            let temp = tokens[i];
            switch (temp) {
                case '+':
                    stack.push(val2 + val1);
                    break;
                case '-':
                    stack.push(val2 - val1);
                    break;
                case '*':
                    stack.push(val2 * val1);
                    break;
                case '/':
                    stack.push(Math.trunc(val2 / val1));
                    break;
            }
        }
    }
    return stack.pop();
};