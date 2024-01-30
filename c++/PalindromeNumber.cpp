#include <iostream>

class Solution {
public:
    bool isPalindrome(int x) {
        int y = 0;
        int temp = x;
        if (x < 0) {
        	return false;
        }
        while (temp != 0) {
        	y = (y * 10) + (temp % 10);
        	temp/= 10;
        }
        if (y == x) {
        	return true;
        } else {
        	return false;
        }
    }
};

int main() {
	int input;
	std::cin >> input;
	Solution s;
	bool output = s.isPalindrome(input);
	if (output == true) {
		std::cout << "This is a palindrome" << std::endl;
	} else {
		std::cout << "This is not a palindrome" << std::endl;
	}
	return 0;
}