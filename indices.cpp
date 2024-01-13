#include <iostream>
#include <vector>
#include <unordered_map>

class Indices {
public:
    void twoSum(std::vector<int>& nums, int target) {
        std::unordered_map<int, int> numMap;

        for (int i = 0; i < nums.size(); i++) {
            int complement = target - nums[i];

            if (numMap.find(complement) != numMap.end()) {
                std::cout << "Indices: " << numMap[complement] << ", " << i << std::endl;
                return;
            }

            numMap[nums[i]] = i;
        }

        std::cout << "No solution found." << std::endl;
    }
};

int main() {
    Indices indices;
    std::vector<int> nums = {2, 7, 11, 15};
    std::vector<int> nums1 = {3, 2, 4};
    int target = 9;
    int target1 = 6;

    indices.twoSum(nums, target);
    indices.twoSum(nums1, target1);

    return 0;
}
