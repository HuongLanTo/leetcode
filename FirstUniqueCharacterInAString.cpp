#include <iostream>
#include <vector>

class Solution {
public:
    int firstUniqChar(std::string s) {
        std::vector<int> v(256, 0);
        for (int i = 0; i < s.length(); i++) {
        	v[s[i] - 'a']++;
        }
        for (int i = 0; i < s.length(); i++) {
        	if (v[s[i] - 'a'] == 1) {
        		return i;
        	}
        }
        return -1;
    }
};

int main() {
	std::string input;
	std::cin >> input;
	Solution s;
	std::cout << s.firstUniqChar(input) << std::endl;
	return 0;
}