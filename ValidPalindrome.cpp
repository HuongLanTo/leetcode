#include <iostream>
#include <string>
#include <stdio.h>
#include <ctype.h>
#include <locale>

class Solution {
public:
    bool isPalindrome(std::string s) {
    	if (s == "") {
    		return true;
    	}
        int begin = 0; 
        int end = s.length() - 1;
        while (begin < end) {
        	while (isalnum(s[begin]) == false && begin < end) {
        		begin++;
        	}
        	while (isalnum(s[end]) == false && begin < end) {
        		end--;
        	}
        	if (tolower(s[begin]) != tolower(s[end])) {
        		return false;
       		} else {
       			begin++;
      			end--;
       		}
        }
        return true;
    }
};

int main() {
	std::string input;
	getline(std::cin, input);
	Solution s;
	bool output = s.isPalindrome(input);
	if (output == true) {
		std::cout << "This string is a palindrome." << std::endl;
	} else {
		std::cout << "This is not a palindrome." << std::endl;
	}
	return 0;
}