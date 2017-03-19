#include <iostream>
#include <unordered_map>
#include <string>

class Solution {
public:
    int romanToInt(std::string s) {
        std::unordered_map<char, int> roman = {{'I', 1}, {'V', 5}, {'X', 10}, {'L', 50},
    													{'C', 100}, {'D', 500}, {'M', 1000}};
    	int result = 0;
    	for (int i = 0; i < s.length(); i++) {
    		if (roman[s[i]] < roman[s[i + 1]]) {
    			result-= roman[s[i]];
    		} else {
    			result+= roman[s[i]];
    		}
    	}
    	return result;
    }
};

int main() {
	std::string input = "IV";
	Solution s;
	int output = s.romanToInt(input);
	std::cout << output << std::endl;
	return 0;
}