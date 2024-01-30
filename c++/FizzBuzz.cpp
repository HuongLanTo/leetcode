#include <iostream>
#include <vector>
#include <string>

class Solution {
public:
    std::vector<std::string> fizzBuzz(int n) {
    	std::vector<std::string> result;
        for (int i = 0; i < n; i++) {
        	if ((i + 1) % 15 == 0) {
        		result.push_back("FizzBuzz");
        	} else if ((i + 1) % 3 == 0) {
        		result.push_back("Fizz");
        	} else if ((i + 1) % 5 == 0) {
        		result.push_back("Buzz");
        	} else {
        		result.push_back(to_string(i + 1));
        	}
        }
	    return result;
    }
};

int main() {
	int input = 6;
	Solution s;
	std::vector<std::string> v;
	v = s.fizzBuzz(input);
	for (int i = 0; i < v.size(); i++) {
		std::cout << v[i] << std::endl;
	}
	return 0;
}