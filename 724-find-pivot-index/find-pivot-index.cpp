class Solution {
public:
   vector<int> prefixsum;
    int pivotIndex(vector<int>& nums) {
        prefixsum.resize(nums.size());
        prefixsum[0]=nums[0];
        for(int i=1;i<nums.size();i++){
            prefixsum[i]=prefixsum[i-1]+nums[i];
        }
        int leftsum=0;
        int rightsum=0;
        for(int i=0;i<nums.size();i++){
            if(i==0){
                 leftsum=0;
            }
            else{
                leftsum= prefixsum[i-1];
            }
            if(i==nums.size()-1){
                rightsum= 0;
         }
            else{
            rightsum = prefixsum[nums.size()-1] - prefixsum[i];
            }

            if(leftsum==rightsum) return i;        
            }
      return -1;
    }
};