#include <iostream>
#include <string>

class Solution {
public:
    std::string convertToTitle(int n) {
        std::string result;
        while (n != 0) {
        	n = n - 1;
        	char temp = (n % 26) + 'A'; 
        	result = temp + result;
        	n = n / 26;
        }
        return result;
    }
};

int main() {
	int input;
	std::string output;
	std::cin >> input;
	Solution s;
	output = s.convertToTitle(input);
	std::cout << "The corresponding column title as appear in an Excel sheet is " << output << std::endl;
	return 0;
}