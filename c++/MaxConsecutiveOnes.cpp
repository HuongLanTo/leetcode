#include <iostream>
#include <vector>

class Solution {
public:
    int findMaxConsecutiveOnes(std::vector<int>& nums) {
    	int max = 0;
    	int temp = 0;
    	for (int i = 0; i < nums.size(); i++) {
    		if (nums[i] == 1) {
    			temp++;
    			if (temp > max) {
    				max = temp;
    			}
    		} else {
    			temp = 0;
    		}
    	}
    	return max;
    }
};

int main() {
	std::vector<int> input;
	int temp;
	while (std::cin >> temp) {
		input.push_back(temp);
	}
	Solution s;
	std::cout << "The maximum number of consecutive 1s in this array is: " << s.findMaxConsecutiveOnes(input) << std::endl;
	return 0;
}