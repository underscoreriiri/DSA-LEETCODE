class Solution {
public:
    vector<int> prefix;
    int findMiddleIndex(vector<int>& nums) {
        prefix.resize(nums.size());
        prefix[0]=nums[0];
        for(int i=1;i<nums.size();i++){
            prefix[i]=prefix[i-1]+nums[i];
        }
        int leftsum=0,rightsum=0;
        
        for(int i =0;i<nums.size();i++){
            if(i==0){
                leftsum=0;
            }
            else{
                leftsum = prefix[i-1];
            }
            if(i==nums.size()-1){
                rightsum=0;
            }
            else{
               rightsum= prefix[nums.size()-1] - prefix[i];
            }
            if(leftsum==rightsum) return i;
        }
        return -1;
    }
};