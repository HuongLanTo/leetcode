/**
 * @param {number[]} students
 * @param {number[]} sandwiches
 * @return {number}
 */
var countStudents = function(students, sandwiches) {
    let stack = [];
    let sandwichIndex = 0;
    for (let i = 0; i < students.length; i++) {
        if (students[i] !== sandwiches[sandwichIndex]) {
            stack.push(students[i]);
        } else {
            sandwichIndex++;
        }
    }
    if (stack.length === 0 || sandwiches.length === stack.length) {
        return stack.length;
    }
    return countStudents(stack, sandwiches.slice(sandwichIndex));
};