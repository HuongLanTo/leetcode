#include <iostream>

class Solution {
public:
    int findComplement(int num) {
        int mask = ~0;
        while (num & mask) mask <<= 1;
        return ~mask & ~num;
    }
};

int main() {
	int input;
	std::cin >> input;
	Solution s;
	std::cout << s.findComplement(input) << std::endl;
	return 0;
}