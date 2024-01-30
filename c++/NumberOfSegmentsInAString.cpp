#include <iostream>
#include <string>

class Solution {
public:
    int countSegments(std::string s) {
        int result = 0;
        int i = 0;
        while (s[i] == ' ') {
        	i++;
        }
        for (int j = i; j < s.length(); j++) {
        	if ((s[j] != ' ') && (s[j + 1] == ' ')) {
        		result++;
        	} else if ((s[j] != ' ') && (s[j + 1] == '\0')) {
        		result++;
        	}
        }
        return result;
    }
};

int main() {
	std::string input;
	getline(std::cin, input);
	Solution s;
	std::cout << "The number of segments in a string: " << s.countSegments(input) << std::endl;
	return 0;
}