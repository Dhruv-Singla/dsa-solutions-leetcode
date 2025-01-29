class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> indexMap;
        for (int i = 0; i < nums.size(); i++) {
            int complement = target - nums[i];

            if (indexMap.find(complement) != indexMap.end()) {
                return {indexMap[complement], i};
            }

            indexMap[nums[i]] = i;
        }
        return {};
    }
};
//1. Two Sum

// Intuition
// using 2 pointer but used map to store and find()

// Approach
// calculate diff to reach target and find that number in array by find()

// Complexity
// Time complexity: O(n))
// Space complexity: O(n)
