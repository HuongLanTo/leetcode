#include <iostream>
#include <vector>
#include <math.h>

class Solution {
public:
    std::vector<int> constructRectangle(int area) {
        int length = area;
        int width = 1;
        int difference = length - width;
        int temp;
        for (int i = 1; i <= sqrt(area); i++) {
        	if (area % i == 0) {
        		temp = (area / i) - i;
        		if (temp < difference) {
        			difference = temp;
        			length = area / i;
        			width = i;
        		}
        	}
        }
        std::vector<int> result;
        result.push_back(length);
        result.push_back(width);
        return result;
    }
};

int main() {
	int input;
	std::cin >> input;
	std::vector<int> output;
	Solution s;
	output = s.constructRectangle(input);
	for (int i = 0; i < output.size(); i++) {
		std::cout << output[i] << " ";
	}
	return 0;
}