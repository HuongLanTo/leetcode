#include <iostream>
#include <vector>

class Solution {
public:
    std::vector<int> findDisappearedNumbers(std::vector<int>& nums) {
        for (int i = 0; i < nums.size(); ) {
            if (nums[nums[i] - 1] != nums[i]) {
                int temp = nums[nums[i] - 1];
                nums[nums[i] - 1] = nums[i];
                nums[i] = temp;
            } else {
                i++;
            }
        }
        int remember = 0;
        for (int i = 0; i < nums.size(); ) {
            if (nums[i] == i + 1 + remember) {
                nums.erase(nums.begin() + i);
                remember++;
        	} else {
        		nums[i] = i + 1 + remember;
        		i++;
        	}
        }
        return nums;
    }
};


int main() {
	std::vector<int> v;
	Solution s;
	int input;
	while (std::cin >> input) {
		v.push_back(input);
	}
	s.findDisappearedNumbers(v);
	for (int i = 0; i < v.size(); i++) {
		std::cout << v[i] << " ";
	}
	return 0;
}

//just for testing
