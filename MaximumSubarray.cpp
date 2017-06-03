#include <iostream>
#include <vector>

class Solution {
public:
    int maxSubArray(std::vector<int>& nums) {
        int sum = 0, max = 0;
        for (int i = 0; i < nums.size(); i++) {
        	sum+= nums[i];
        	if (sum > max) {
        		max = sum;
        	}
        	if (sum < 0) {
        		sum = 0;
        	}
        }
        if (max == 0) {
        	max = nums[0];
        	for (int i = 1; i < nums.size(); i++) {
        		if (nums[i] > max) {
        			max = nums[i];
        		}
        	}
        }
        return max;
    }
};

int main() {
	std::vector<int> array;
	int input;
	while (std::cin >> input) {
		array.push_back(input);
	}
	Solution s;
	int output = s.maxSubArray(array);
	std::cout << output << std::endl;
	return 0;
}