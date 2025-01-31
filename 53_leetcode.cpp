class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int currsum = nums[0];
        int finalsum = nums[0];

        for(int i=1;i<nums.size();i++){
            if(currsum < 0){
                currsum =nums[i];
            }else{
                currsum+=nums[i];
            }
            if(finalsum<currsum){
                finalsum=currsum;
            }
        }
        return finalsum;
    }
};
//53. Maximum Subarray

// Intuition
// First I thought of two loop but time complexity was very high, then i though of removing elements which are decreasing the sum and starting ubarray after sum come down to less than zero.

// Approach
// I looped the array once and also iterate with counting sum, and when sum goes down to zero remove that length

// Complexity
// Time complexity: O(n)
// Space complexity: O(1)
