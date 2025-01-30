class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int x=0,a=0;
        for(int i:nums) {
            if(a==0){
                x=i;
            }
            a+=(i==x)?1:-1;
        }
        return x;
    }
};
