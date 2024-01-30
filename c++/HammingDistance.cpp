#include <iostream>
#include <vector>

class Solution {
public:
    int hammingDistance(int x, int y) {
        int result = 0, i = 0;
        x = x ^ y;
        std::vector<int> v(8, 0);
        while (x != 0) {
        	v[i] = x % 2;
        	x/= 2;
        	i++;
        }
        for (int i = 0; i < v.size(); i++) {
        	if (v[i] == 1) {
        		result++;
        	}
        }
        return result;
    }
};

int main() {
	int input1, input2;
	std::cin >> input1 >> input2;
	Solution s;
	std::cout << s.hammingDistance(input1, input2) << std::endl;
	return 0;
}