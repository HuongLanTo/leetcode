#include <iostream>
#include <vector>
#include <iomanip>

class Solution {
public:
    int islandPerimeter(std::vector<std::vector<int> >& grid) {
       	int count = 0;
       	int repeat = 0;
    	for (int i = 0; i < grid.size(); i++) {
    		for (int j = 0; j < grid[i].size(); j++) {
    			if (grid[i][j] == 1) {
    				count++;
    				if ((j != 0) && (grid[i][j - 1] == 1)) {
    					repeat++;
    				}
    				if ((i != 0) && (grid[i - 1][j] == 1)) {
    					repeat++;
    				}
    			}
    		}
       	}
       	return count * 4 - repeat * 2; 
    }
};

int main() {
	std::vector<std::vector<int> > input(100, std::vector<int>(100, 0));
	int width, length, temp;
	std::cout << "Please enter the width of the grid: ";
	std::cin >> width;
	std::cout << "Please enter the length of the grid: ";
	std::cin >> length;
	for (int i = 0; i < width; i++) {
		for (int j = 0; j < length; j++) {
			std::cin >> temp;
			input[i].push_back(temp);
		}
	}
	Solution s;
	std::cout << "The perimeter of the island: " << s.islandPerimeter(input) << std::endl;
	return 0;
}