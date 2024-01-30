#include <iostream>
#include <vector>

class Solution {
public:
    int missingNumber(std::vector<int>& nums) {
    	int result = nums.size() * (nums.size() + 1) / 2;
    	for (int i = 0; i < nums.size(); i++) {
    		result-= nums[i];
    	}
    	return result;
    }
};

int main() {
	std::vector<int> v;
	int input;
	Solution s;
	while (std::cin >> input) {
		v.push_back(input);
	}
	std::cout << s.missingNumber(v) << std::endl;
	return 0;
}