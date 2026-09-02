class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int sum=0;
        for(int i=0;i<k;i++){
            sum+=nums[i];
        }
        int maxsum= sum;
        int j = 0;
        for(int i=k;i<nums.size();i++){
            sum = sum + nums[i];
            sum = sum - nums[j];
            maxsum = max(maxsum,sum);
            j++;
          
        }
        double avg = (double)maxsum/k;
        return avg;
    }
};