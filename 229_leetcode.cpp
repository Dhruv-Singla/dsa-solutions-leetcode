class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int,int> hash;
        vector<int> ans;
        for(int num : nums){
            hash[num]++;
        }
        for(const auto& trav:hash){
            if(trav.second > nums.size()/3){
                ans.push_back(trav.first);
            }
        }
        return ans;      
    }
};

// Complexity
// Time complexity: n
// Space complexity: n
