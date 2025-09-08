class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        for(int i=0;i+1<nums.size();i+=2){
            if(nums[i]!=nums[i+1]) return nums[i];
        }
        return nums.back();
    }
};