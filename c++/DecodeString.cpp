#include <iostream>
#include <string>
#include <stack>

class Solution {
public:
    std::string decodeString(std::string s) {
    	std::stack<std::string> chars;
    	std::stack<int> nums;
    	std::string res;
    	int num = 0;
    	for (char c : s) {
    		if (isdigit(c)) {
    			num = num * 10 + (c - '0');
    		} else if (isalpha(c)) {
    			res.push_back(c);
    		} else if (c == '[') {
    			chars.push(res);
    			nums.push(num);
    			res = "";
    			num = 0;
    		} else if (c == ']') {
    			std::string temp = res;
    			for (int i = 0; i < nums.top() - 1; i++) {
    				res+= temp;
    			}
    			res = chars.top() + res;
    			chars.pop();
    			nums.pop();
    		}
    	}
    	return res;
    }
};

int main() {
	std::string input = "3[a]2[bc]";
	Solution s;
	std::cout << s.decodeString(input);
	return 0;
}