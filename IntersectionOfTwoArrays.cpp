#include <iostream>
#include <vector>
#include <algorithm>

class Solution {
public:
    std::vector<int> intersection(std::vector<int>& nums1, std::vector<int>& nums2) {
        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());
        std::vector<int> result;
        int i = 0, j = 0;
        while (i < nums1.size() && j < nums2.size()) {
        	if (nums1[i] < nums2[j]) {
        		i++;
        	} else if (nums1[i] > nums2[j]) {
        		j++;
        	} else {
        		if (result.size() == 0 || result.back() != nums1[i]) {
        			result.push_back(nums1[i]);
        		}
        		i++;
        		j++;
        	}
        }
        return result;
    }
};

int main() {
	std::vector<int> input1;
	std::vector<int> input2;
	int n, temp;
	std::cout << "The array 1: " << std::endl;
	std::cout << "\tPlease enter the number of elements: ";
	std::cin >> n;
	for (int i = 0; i < n; i++) {
		std::cin >> temp;
		input1.push_back(temp);
	}
	std::cout << "The array 2: " << std::endl;
	std::cout << "\tPlease enter the number of elements: ";
	std::cin >> n;
	for (int i = 0; i < n; i++) {
		std::cin >> temp;
		input2.push_back(temp);
	}
	Solution s;
	std::vector<int> output;
	output = s.intersection(input1, input2);
	std::cout << "The result: ";
	for (int i = 0; i < output.size(); i++) {
		std::cout << output[i] << " ";
	}
	return 0;
}