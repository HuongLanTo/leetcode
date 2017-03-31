#include <iostream>

class Solution {
public:
    int arrangeCoins(int n) {
    	int i = 0;
    	while (n >= 0) {
    		i++;
    		n-= i;
    	}
    	return i - 1;
    }
};

int main() {
	int input;
	Solution s;
	std::cin >> input;
	std::cout << s.arrangeCoins(input) << std::endl;
	return 0;
}