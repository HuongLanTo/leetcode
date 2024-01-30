#include <iostream>
#include <vector>

class Solution {
public:
    std::vector<int> findDuplicates(std::vector<int>& nums) {
        for (int i = 0; i < nums.size(); ) {
            if (nums[nums[i] - 1] != nums[i]) {
                int temp = nums[nums[i] - 1];
                nums[nums[i] - 1] = nums[i];
                nums[i] = temp;
            }
            else {
                i++;
            }
        }
        int remember = 0;
        for (int i = 0; i < nums.size(); ) {
            if (nums[i] == i + 1 + remember) {
                nums.erase(nums.begin() + i);
                remember++;
            } else {
                i++;
            }
        }
        return nums;
    }
};

int main() {
    int input;
    std::vector<int> v;
    Solution s;
    while (std::cin >> input) {
        v.push_back(input);
    }
    s.findDuplicates(v);
    for (int i = 0; i < v.size(); i++)
        std::cout << v[i] << " ";
    return 0;

}