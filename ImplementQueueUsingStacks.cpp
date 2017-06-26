#include <iostream>
#include <stack>

class MyQueue {
private:
    std::stack<int> stack1;
    std::stack<int> stack2;
public:
    /** Initialize your data structure here. */
    MyQueue() {

    }
    
    /** Push element x to the back of queue. */
    void push(int x) {
        stack1.push(x);
    }
    
    /** Removes the element from in front of queue and returns that element. */
    int pop() {
        if (stack2.empty()) {
            while (!stack1.empty()) {
                stack2.push(stack1.top());
                stack1.pop();
            }
        }
        int result = stack2.top();
        stack2.pop();
        return result;
    }
    
    /** Get the front element. */
    int peek() {
        if (stack2.empty()) {
            while (!stack1.empty()) {
                stack2.push(stack1.top());
                stack1.pop();
            }
        }
        return stack2.top();
    }
    
    /** Returns whether the queue is empty. */
    bool empty() {
        return (stack1.empty() && stack2.empty());
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue obj = new MyQueue();
 * obj.push(x);
 * int param_2 = obj.pop();
 * int param_3 = obj.peek();
 * bool param_4 = obj.empty();
 */

int main() {
    MyQueue obj;
    obj.push(1);
    obj.push(2);
    obj.push(3);
    int param_2 = obj.pop();
    std::cout << "The element from in front of queue removed is: " << param_2 << std::endl;
    int param_3 = obj.peek();
    std::cout << "The front element is: " << param_3 << std::endl;
    bool param_4 =  obj.empty();
    if (param_4 == true) {
        std::cout << "The queue is empty." << std::endl;
    } else {
        std::cout << "The queue is not empty." << std::endl;
    }
    return 0;
}