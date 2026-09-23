class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int closestSum = nums[0] + nums[1] + nums[2];

        for(int i=0;i<nums.size()-2;i++){
            int k=i+1;
            int j= nums.size()-1;

            while(k<j){
                int currsum= nums[i]+nums[j]+nums[k];
                if(currsum == target){
                    return target;
                }
                if(abs(target-currsum)<abs(target-closestSum)){
                    closestSum= currsum;
                }
                if(currsum<target){
                    k++;
                }else{
                    j--;
                }
            }

        }
        return closestSum;
        
    }
};