#include <iostream>
#include <string>

class Solution {
public:
    int titleToNumber(std::string s) {
    	int result = 0;
    	for (int i = 0; i < s.length(); i++) {
    		result = result * 26 + int(s[i] - 'A') + 1;
    	}
    	return result;
    }
};

int main() {
	std::string input;
	getline(std::cin, input);
	Solution s;
	int output = s.titleToNumber(input);
	std::cout << "The corresponding column number is " << output << std::endl;
	return 0;
}