#include <iostream>

class Solution {
public:
    bool isUgly(int num) {
        if (num == 1) {
        	return true;
        }
        if (num <= 0) {
        	return false;
        }
        while (num % 2 == 0) {
        	num/= 2;
        }
        while (num % 3 == 0) {
        	num/= 3;
        }
        while (num % 5 == 0) {
        	num/= 5;
        }
        if (num == 1) {
        	return true;
        }
        return false;
    }
};

int main() {
	int input;
	std::cin >> input;
	Solution s;
	bool output = s.isUgly(input);
	if (output == true) {
		std::cout << "This is an ugly number." << std::endl;
	} else {
		std::cout << "This is not an ugly number." << std::endl;
	}
	return 0;
}