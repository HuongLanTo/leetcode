#include <iostream>
#include <vector>

class Solution {
public:
    int singleNumber(std::vector<int>& nums) {
    	int result = 0;
        for (int i = 0; i < nums.size(); i++) {
        	result^= nums[i];
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
	std::cout << s.singleNumber(v) << std::endl;
	return 0;
}