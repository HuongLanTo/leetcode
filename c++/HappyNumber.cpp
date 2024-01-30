#include <iostream>

class Solution {
public:
    bool isHappy(int n) {
        while (true) {
        	if (n == 4) {
        		return false;
        	}
        	if (n == 1) {
        		return true;
        	}
        	n = SumOfLetters(n);
        }
    }
    int SumOfLetters(int num) {
    	int sum = 0;
    	while (num != 0) {
    		sum+= ((num % 10) * (num % 10));
    		num = num / 10;
    	}
    	return sum;
    }
};


int main() {
	int n;
	std::cin >> n;
	Solution s;
	if (s.isHappy(n) == true) {
		std::cout << "This is a happy number";
	}
	else {
		std::cout << "This is not a happy number";
	}
	return 0;
}