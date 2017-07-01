#include <iostream>
#include <queue>

class MyStack {
private:
	std::queue<int> queue;
public:
    /** Initialize your data structure here. */
    MyStack() {
        
    }
    
    /** Push element x onto stack. */
    void push(int x) {
        queue.push(x);
    }
    
    /** Removes the element on top of the stack and returns that element. */
    int pop() {
        for (int i = 0; i < queue.size() - 1; i++) {
        	queue.push(queue.front());
        	queue.pop();
        }
        int result = queue.front();
        queue.pop();
        return result;
    }
    
    /** Get the top element. */
    int top() {
        return queue.back();
    }
    
    /** Returns whether the stack is empty. */
    bool empty() {
        return queue.empty();
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack obj = new MyStack();
 * obj.push(x);
 * int param_2 = obj.pop();
 * int param_3 = obj.top();
 * bool param_4 = obj.empty();
 */

int main() {
	MyStack obj;
	obj.push(1);
	obj.push(2);
	obj.push(3);
	obj.push(4);
	int param_2 = obj.pop();
    std::cout << "The element from in front of stack removed is: " << param_2 << std::endl;
    int param_3 = obj.top();
    std::cout << "The front element is: " << param_3 << std::endl;
    bool param_4 =  obj.empty();
    if (param_4 == true) {
        std::cout << "The stack is empty." << std::endl;
    } else {
        std::cout << "The stack is not empty." << std::endl;
    }
    return 0;
}