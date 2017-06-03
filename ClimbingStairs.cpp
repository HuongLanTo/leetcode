#include <iostream> 

class Solution {
public:
    int climbStairs(int n) {
        if (n == 1) {
        	return 1;
        }
        int p1 = 1;
        int p2 = 2;
        int temp;
        for (int i = 3; i <= n; i++) {
        	temp = p2;
        	p2 = p1 + p2;
        	p1 = temp;
        }
        return p2;
    }
};

int main() {
	int n;
	std::cin >> n;
	Solution s;
	std::cout << s.climbStairs(n) << std::endl;
	return 0;
}