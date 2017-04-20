#include <iostream>
#include <string>
#include <stack>

class Solution {
public:
    bool isValid(std::string s) {
        std::stack<char> st;
        for(char c : s){
            if(c == '('|| c == '{' || c == '['){
                st.push(c);
            }else{
                if(st.empty()) return false;
                if(c == ')' && st.top() != '(') return false;
                if(c == '}' && st.top() != '{') return false;
                if(c == ']' && st.top() != '[') return false;
                st.pop();
            }
        }
        return st.empty();
    }
};

int main() {
	std::string input;
	getline(std::cin, input);
	Solution s;
	bool output = s.isValid(input);
	if (output == true) {
		std::cout << "The string is valid" << std::endl;
	} else {
		std::cout << "The string is not valid" << std::endl;
	}
	return 0;
}