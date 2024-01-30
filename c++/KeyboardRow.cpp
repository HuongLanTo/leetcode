#include <iostream>
#include <string>
#include <vector>
#include <unordered_set>

class Solution {
public:
    vector<string> findWords(std::vector<std::string>& words) {
        std::unordered_set<char> row1 {'q', 'w', 'e', 'r', 't', 'y', 'u', 'i', 'o', 'p'};
        std::unordered_set<char> row2 {'a', 's', 'd', 'f', 'g', 'h', 'j', 'k', 'l'};
        std::unordered_set<char> row3 {'z', 'x', 'c', 'v', 'b', 'n', 'm'};
        std::vector<std::unordered_set<char>> rows {row1, row2, row3};

        std::vector<std::string> result;
        for (int i = 0; i < words.size(); ++i) {
        	int row = 0;

        	for (int k = 0; k < 3; ++k) {
        		if (rows[k].count((char)tolower(words[i][0])) > 0) {
        			row = k;
        		}
        	}
        	result.push_back(words[i]);
        	for (int j = 1; j < words[i].size(); ++j) {
        		if (rows[row].count((char)tolower(words[i][j])) == 0) {
        			result.pop_back();
        			break;
        		}
        	}
        }
        return result;
    }
};

int main() {
	std::vector<std::string> input = {"hello", "alaska"};
	Solution s;
	std::cout << s.findWords(input) << std::endl;
	return 0;
}