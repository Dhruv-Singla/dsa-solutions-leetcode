class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> hash(nums.begin(), nums.end());
        int sum = 0;
        for (int n : hash) {
            if (hash.find(n - 1) == hash.end()) {
                int curr = n;
                int crr = 1;
                while (hash.find(curr + 1) != hash.end()) {
                    curr++;
                    crr++;
                }
                sum = max(sum, crr);
            }
        }
        return sum;
    }
};

// Intuition
// see if n-1 exist or not, if yes then you don't need to check next elements.

// Approach
// made a map and used find() to check if next elements exist or not.

// Complexity
// Time complexity: O(n)
// Space complexity: O(n)
