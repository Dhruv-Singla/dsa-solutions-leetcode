class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int t=0;
        vector<int> hash(nums.size()+1,0);
        for(int i=0;i<nums.size();i++){
            hash[nums[i]]++;
        }
        for(int i=0;i<=nums.size();i++){
            if(hash[i]==0){
            t=i;
            break;
            }
        }
        return t;
    }
};
//268. Missing Number
//time complexity O(n)
//space complexity O(n+1)
