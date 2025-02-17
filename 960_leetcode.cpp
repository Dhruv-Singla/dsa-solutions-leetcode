class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int> hash;
        hash[0]=1;
        int sum=0,count=0;
        for(int n:nums){
            sum+=n;
            if(hash.find(sum-k) != hash.end()){
                count+=hash[sum-k];
            }
            hash[sum]++;
        }
        return count;
    }
};
// Approach
// stored in unordered map and then find double checking sum==k

// Complexity
// Time complexity: O(n)
// Space complexity: O(n)
