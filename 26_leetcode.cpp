class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int j=0,k=0;
        for(int i=0;i<nums.size();i++){
            while(nums[i]>nums[j]){
                j++;
                swap(nums[j],nums[i]);
            }
        }
        return j+1;
    }
};
//Remove Duplicates from Sorted Array
//array and 2 pointer
