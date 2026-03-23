class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n = nums.size();
        int i=0;
        int k=0;
        int j=n-1;
        while(i<=j){
            if(nums[i]==0) {
                swap(nums[k],nums[i]);
                k++;
                i++;
            }
            else if(nums[i]==1){
                i++;
            }
            else{
                swap(nums[j],nums[i]);
                j--;
            }
        }
    
        
        
        
    }
};