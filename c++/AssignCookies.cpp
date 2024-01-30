#include <iostream>
#include <algorithm> 
#include <vector>

class Solution {
public:
    int findContentChildren(std::vector<int>& g, std::vector<int>& s) {
        std::sort(g.begin(), g.end());
        std::sort(s.begin(), s.end());

        int result = 0;
        int i = 0;
        for (int j = 0; j < s.size(); j++) {
        	if (i == g.size()) {
        		break;
        	}
        	if (g[i] <= s[j]) {
        		result++;
        		i++;
        	}
        }
        return result;
    }
};

int main() {
	std::vector<int> children;
	std::vector<int> cookies;
	int input;
	std::cout << "Enter the greed factors of children(finish when you enter 0): ";
	std::cin >> input;
	while (input != -1) {
		children.push_back(input);
		std::cin >> input;
	}
	std::cout << "Enter the size of cookies(finish when you enter 0): ";
	std::cin >> input;
	while (input != -1) {
		cookies.push_back(input);
		std::cin >> input;
	}
	Solution s;
	std::cout << "The maximum number of your content children is " << s.findContentChildren(children, cookies);
	return 0;
}