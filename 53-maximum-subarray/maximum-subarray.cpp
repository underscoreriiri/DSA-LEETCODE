class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int res = nums[0];
        int currSum= 0;
        
        for(int i=0;i<nums.size();i++){
            currSum= max(nums[i],nums[i]+currSum);
            res = max(res,currSum);
        }
        return res;
    }
};