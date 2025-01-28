class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int max=0,curr=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==1){
                curr++;
            }else{
                curr=0;
            }
            if(curr>max){
                max=curr;
            }
            
        }
        return max;
    }
};
//485. Max Consecutive Ones
//TC = O(n)
//SC = O(1)
