#include <iostream>
#include <stack>
#include <vector>
#include <climits>

class Solution {
public:
    bool find132pattern(std::vector<int>& nums) {
        int s3 = INT_MIN;
        std::stack<int> stack;
        for (int i = nums.size() - 1; i >= 0; i--) {
        	if (nums[i] < s3) {
        		return true;
        	}
        	while (!stack.empty() && nums[i] > stack.top()) {
        		s3 = stack.top();
        		stack.pop();
        	}
        	stack.push(nums[i]);
        }
        return false;
    }
};

int main() {
	std::vector<int> nums;
	int input;
	while (std::cin >> input) {
		nums.push_back(input);
	}
	Solution s;
	bool output = s.find132pattern(nums);
	if (output == true) {
		std::cout << "True" << std::endl;
	} else {
		std::cout << "False" << std::endl;
	}
	return 0;
}