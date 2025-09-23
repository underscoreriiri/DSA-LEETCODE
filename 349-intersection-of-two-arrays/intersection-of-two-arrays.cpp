class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int>result;
        unordered_set<int> s;
        for(int i=0;i<nums1.size();i++){
            int element = nums1[i];
            bool alreadyInResult = false;
            for (int r = 0; r < result.size(); r++) {
                if (result[r] == element) {
                    alreadyInResult = true;
                    break;
                }
            }
            if (alreadyInResult) continue; 
            for(int j=0;j<nums2.size();j++){
                if(element==nums2[j]){
                    result.push_back(element);
                    
                    break;
                }
                

            }
            
        }
        
        
        
        return  result;
    }
};