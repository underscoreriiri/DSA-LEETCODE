class Solution {
public:
    int minimumSum(vector<int>& nums) {
         int minimumSum = INT_MAX;
        for(int i=0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++){
            for(int k=j+1;k<nums.size();k++){
                if(nums[i]<nums[j]&&nums[k]<nums[j]){
                     int sum = nums[i]+nums[j]+nums[k];
                     minimumSum = min(minimumSum, sum);
                }
           
            
        }
        }
        }
         if(minimumSum == INT_MAX) return -1;
        return minimumSum;
    }
};