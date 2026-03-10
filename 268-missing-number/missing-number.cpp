class Solution {
public:
    int missingNumber(vector<int>& nums) {
        
        int sum=0;
       
        for(int i=0;i<=nums.size();i++){
            sum = sum+i;
        }
        int diff=sum;
        for(int i=0;i<nums.size();i++){
            diff=diff-nums[i];
        }
      return diff;
    }
};