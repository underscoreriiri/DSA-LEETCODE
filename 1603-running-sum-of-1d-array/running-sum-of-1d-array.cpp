class Solution {
public:
    vector<int> prefixsum;
    vector<int> runningSum(vector<int>& nums) {
         prefixsum.resize(nums.size());
         prefixsum[0]=nums[0];
         for(int i=1;i<nums.size();i++){
            prefixsum[i]=prefixsum[i-1]+nums[i];
         }
         return prefixsum;
    }
};