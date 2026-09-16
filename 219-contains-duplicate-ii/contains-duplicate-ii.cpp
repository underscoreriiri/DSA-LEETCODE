class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_set<int> window;
        int j=0;
        for(int i=0;i<nums.size();i++){
            if(window.count(nums[i])){
                return true;
            }
            window.insert(nums[i]);

            while(window.size()>k){
                window.erase(nums[j]);
                j++;
            }


        }
        return false;
    }
};