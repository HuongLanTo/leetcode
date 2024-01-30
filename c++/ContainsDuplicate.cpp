#include <iostream>
#include <vector>
#include <algorithm> 

class Solution {
public:
    bool containsDuplicate(std::vector<int>& nums) {
    	if (nums.size() == 1) {
    		return false;
    	}
        std::sort(nums.begin(), nums.end());
        for (int i = 0; i < nums.size(); i++) {
        	if (nums[i] == nums[i + 1]) {
        		return true;
        	}
        }
        return false;
    }
};

int main() {
	int val;
	std::vector<int> input;
	while (std::cin >> val) {
		input.push_back(val);
	}
	Solution s;
	bool output = s.containsDuplicate(input);
	if (output == true) {
		std::cout << "The array contains duplicate." << std::endl;
	} else {
		std::cout << "The array doesn't contain duplicate." << std::endl;
	}
	return 0;
}