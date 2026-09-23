class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> result;
        int n = nums.size();
        
        // Step 1: Sort the array to enable two-pointer traversal and easy duplicate skipping
        sort(nums.begin(), nums.end());
        
        // Step 2: Fix one number at a time (nums[i])
        for (int i = 0; i < n - 2; i++) {
            // Skip duplicates for the fixed number to ensure unique triplets
            if (i > 0 && nums[i] == nums[i - 1]) {
                continue;
            }
            
            // Step 3: Initialize pointers for the remaining array
            int left = i + 1;
            int right = n - 1;
            
            while (left < right) {
                int sum = nums[i] + nums[left] + nums[right];
                
                if (sum == 0) {
                    result.push_back({nums[i], nums[left], nums[right]});
                    
                    // Skip duplicates for the left pointer
                    while (left < right && nums[left] == nums[left + 1]) {
                        left++;
                    }
                    // Skip duplicates for the right pointer
                    while (left < right && nums[right] == nums[right - 1]) {
                        right--;
                    }
                    
                    left++;
                    right--;
                } 
                else if (sum < 0) {
                    left++; // Sum is too small, increase the left pointer
                } 
                else {
                    right--; // Sum is too large, decrease the right pointer
                }
            }
        }
        
        return result;
    }
};