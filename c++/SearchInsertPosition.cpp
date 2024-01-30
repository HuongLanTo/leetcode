#include <iostream>
#include <vector>

class Solution {
public:
    int searchInsert(std::vector<int>& nums, int target) {
    	if (target > nums[nums.size() - 1]) {
    		return nums.size();
    	}
    	if (target < nums[0]) {
    		return 0;
    	}
        for (int i = 0; i < nums.size(); i++) {
        	if (nums[i] == target) {
        		return i;
        	} else if (target > nums[i] && target < nums[i + 1]) {
        		return i + 1;
        	}
        }
    }
};

int main() {
	std::vector<int> v;
	Solution s;
	int input, target;
	std::cin >> target;
	while (std::cin >> input) {
		v.push_back(input);
	}
	std::cout << s.searchInsert(v, target) << std::endl;
	return 0;
}