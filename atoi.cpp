#include <iostream>
#include <string>
#include <limits>

class Solution {
public:
    int myAtoi(std::string str) {
    	int i = 0;
    	long long result = 0;
        int remember = 1;
        while (str[i] == ' ') {
            i++;
        }
    	if (str[i] == '+' || str[i] == '-') {
            if (str[i] == '-') {
                remember = -1;
            }
    		i++;
    	}
    	while (str[i] != '\0') {
    		if (((str[i] - '0') > 9 || (str[i] - '0') < 0)) {
    			break;
    		}
    		result = result * 10;
    		result = result + (str[i] - '0');
    		i++;
            if (result > 2147483648) {
                break;
            }
    	}
    	result = result * remember;
        if (result > 2147483647) { 
            return 2147483647;
        } 
        if (result < -2147483648) {
            return -2147483648;  
        }
        return result;
    }
};

int main () {
	std::string input = "2147483648";
	//corner case: "ab", "", "1000.
	Solution s;
	std::cout << s.myAtoi(input) << std::endl;
}