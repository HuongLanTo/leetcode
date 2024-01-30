#include <iostream>
#include <string.h>
#include <vector>

class Solution {
public:
    bool isAnagram(std::string s, std::string t) {
    	std::vector<int> v(256, 0);
    	for (int i = 0; i < s.length(); i++) {
    		v[s[i] - '0']++;
    	}
    	for (int i = 0; i < t.length(); i++) {
    		v[t[i] - '0']--;
    	}
    	for (int i = 0; i < v.size(); i++) {
    		if (v[i] != 0) {
    			return false;
    		}
		}
		return true;
	}
};

int main() {
	std::string input1, input2;
	getline(std::cin, input1);
	getline(std::cin, input2);
	Solution s;
	bool output = s.isAnagram(input1, input2);
	if (output == true) {
		std::cout << input2 << " is an anagram of " << input1 << std::endl;
	} else {
		std::cout << input2 << " is not an anagram of " << input1 << std::endl;
	}
	return 0;
}