class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int maxsum=0;
        for(int i=0;i<k;i++){
            maxsum += nums[i];
        }
        int maxsum2=maxsum;
        for(int i=k;i<nums.size();i++){
         maxsum = maxsum-nums[i-k];
         maxsum = maxsum + nums[i];
         maxsum2 = max(maxsum,maxsum2);
        }
        double MaxAverage = (double)maxsum2 / k;
        return MaxAverage;
    }
};