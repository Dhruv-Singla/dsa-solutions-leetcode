// Approach
// sort them to use 2 pointer approch and iterate i from 0 to n, use j and k to get perfect 0 and print.

// Complexity
// Time complexity: O(N**2)
// Space complexity: O(1)


class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> num;
        sort(nums.begin(),nums.end());
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(i>0 && nums[i]==nums[i-1]){
                continue;
            }
            int j=i+1;
            int k=n-1;
            while(j<k){
                int sum = nums[i]+nums[j]+nums[k];
                if(sum>0){
                    k--;
                }
                else if(sum<0){
                    j++;
                }
                else{
                    num.push_back({nums[i],nums[j],nums[k]});
                    j++;
                    while(nums[j]==nums[j-1]&&j<k){
                        j++;
                    }
                }
            }

        }

        return num;
    }
};
