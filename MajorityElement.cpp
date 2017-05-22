#include <iostream>
#include <vector>

class Solution {
public:
    int majorityElement(std::vector<int>& nums) {
        int majorityIndex = 0;
        int count = 1;
        for (int i = 1; i < nums.size(); i++) {
        	if (nums[majorityIndex] == nums[i]) {
        		count++;
        	} else {
        		count--;
        	}
        	if (count == 0) {
        		majorityIndex = i;
        		count = 1;
        	}
        }
        return nums[majorityIndex];
    }
};

int main() {
	std::vector<int> input;
	int val;
	while (std::cin >> val) {
		input.push_back(val);
	}
	Solution s;
	std::cout << "The majority element is " << s.majorityElement(input);
	return 0;
}