class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        k = k % nums.size();
        reverse(nums.begin(), nums.end()-k);
        reverse(nums.rbegin(), nums.rbegin()+k);
        reverse(nums.begin(), nums.end());
    }
};
//big brain question
//medium
//189. Rotate Array
