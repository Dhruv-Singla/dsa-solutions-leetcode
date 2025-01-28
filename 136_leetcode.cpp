//optimal solution
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int temp=0;
        for(int i=0;i<nums.size();i++){
            temp ^= nums[i];
        }
        return temp;
    }
};

//brute force
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        map<int,int> hash;
        int temp;
        for(int i=0;i<nums.size();i++){
            hash[nums[i]]++;
        }
        for(int i=0;i<nums.size();i++){
            if(hash[nums[i]]==1){
                temp=nums[i];
            }
        }
        return temp;
    }
};
