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
