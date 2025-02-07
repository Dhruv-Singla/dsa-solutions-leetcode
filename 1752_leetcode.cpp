//beats 100% 

//easy to understand

class Solution {
public:
    bool check(vector<int>& nums) {
        int i = 0, sum = 0;
        bool b = true;
        while (i < nums.size() && nums[i] != 1) {
            i++;
        }
        if (i == nums.size()) {
            b = false;
        }
        for (int j = 0; j < nums.size(); j++) {
            if (nums[(i + j)%nums.size()]>nums[(i + j + 1) % nums.size()]) {
                sum++;
            }
        }
        return (sum <= 1);
    }
};
