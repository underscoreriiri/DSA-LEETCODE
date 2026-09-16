class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        unordered_map<int,int> mp;
        int j=0;
        int count = 0;
        for(int i=0;i<fruits.size();i++){
            mp[fruits[i]]++;

            while(mp.size()>2){
                mp[fruits[j]]--;
                if (mp[fruits[j]] == 0) {
                    mp.erase(fruits[j]);
                }
                j++;
            }
            count = max(count,i-j+1);
        }
        return count;
    }
};