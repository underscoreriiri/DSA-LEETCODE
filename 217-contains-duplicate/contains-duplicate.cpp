class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int,int> n;

        for(int i=0;i<nums.size();i++){
            if(n.find(nums[i])!=n.end()){
                return true;
            }
            n[nums[i]] = i;
            
        }
         return false;
    }
};