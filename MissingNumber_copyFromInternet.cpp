#include <iostream>
#include <vector>

class Solution {
public:
    int missingNumber(std::vector<int>& nums) {
    	int res = nums[0];
    	for (int i = 1; i < nums.size(); i++) {
    		res = res ^ i ^ nums[i];
    	}
    	res = res ^ nums.size();
    	return res;
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