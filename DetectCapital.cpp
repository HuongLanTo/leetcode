#include <iostream>
#include <string>

class Solution {
public:
    bool detectCapitalUse(std::string word) {
        int size = word.length();
        int count = 0;
        for (int i = 0; i < size; i++) {
        	if (word[i] >= 'a' && word[i] <= 'z') {
        		count++;
        	}
        	else if (word[i] >= 'A' && word[i] <= 'Z') {
        		count+= 2;
        	}
        }
        if (count == size) {
        	return true;
        }
        else if (count == 2 * size) {
        	return true;
        }
        else if ((count == size + 1) && (word[0] >= 'A' && word[0] <= 'Z')) {
        	return true;
        }
        else {
        	return false;
        }
    }
};

int main() {
	std::string str;
	Solution s;
	std::cin >> str;
	if (s.detectCapitalUse(str) == true) {
		std::cout << "This word uses capital in a right way." << std::endl;
	}
	else {
		std::cout << "This word doesn't use capital in a right way." << std::endl;
	}
	return 0;
}