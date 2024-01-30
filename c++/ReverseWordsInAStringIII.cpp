#include <iostream>
#include <string>

class Solution {
public:
    std::string reverseWords(std::string &s) {
        int i = 0, begin, end;
        char temp;
        int length = s.length();
        while (i < length) {
        	while (s[i] == ' ' && i < length) {
        		i++;
        	}
        	begin = i;
        	while (s[i] != ' ' && i < length) {
        		i++;
        	}
        	end = i - 1;
        	while (begin < end) {
        		temp = s[begin];
        		s[begin] = s[end];
        		s[end] = temp;
        		begin++;
        		end--;
        	}
        }
        return s;
    }
};

int main() {
	std::string input, output;
	getline(std::cin, input);
	Solution s;
	output = s.reverseWords(input);
	for (int i = 0; i < output.length(); i++) {
		std::cout << output[i];
	}
	return 0;
}