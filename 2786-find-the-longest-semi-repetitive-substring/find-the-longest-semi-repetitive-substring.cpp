class Solution {
public:
    int longestSemiRepetitiveSubstring(string s) {
        int pair = 0;
        int j=0;
        int max_length=0;
        for(int i=0;i<s.length();i++){
            if(i >0 && s[i]==s[i-1]){
                pair++;
            }
            while(pair>1){
                if (s[j] == s[j + 1]) {
                    pair--;
                }
                j++;
            }
            max_length = max(max_length, i-j+1);

      }
      return max_length;
        
    }
};