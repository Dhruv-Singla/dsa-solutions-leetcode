class Solution {
public:
    void sortColors(vector<int>& nums) {
        int low=0,mid=0,high=nums.size()-1;
        while(mid<=high){
            if(nums[mid]==0){
                nums[mid]=1;
                nums[low]=0;
                low++;
                mid++;
            }
            else if(nums[mid]==1){
                mid++;
            }
            else if(nums[mid]==2){
                nums[mid]=nums[high];
                nums[high]=2;
                high--;
            }

        }
    }
};
// Intuition
// used algo by using 3 pointer

// Approach
// one pointer for end of 0, second at end of 1, and third at start of 2 initially at end

// Complexity
// Time complexity: O(n)
// Space complexity:O(1)
