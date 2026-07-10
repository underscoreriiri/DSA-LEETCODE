class Solution {
public:
   bool isVowel(char ch) {
    return ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u';
}
    int maxVowels(string s, int k) {
     
int vowelCount =0;
for(int i=0;i<k;i++){
    if (isVowel(s[i]))
    vowelCount++;
}
int maxVowel = vowelCount;
for(int i=k;i<s.length();i++){
    if (isVowel(s[i-k]))
    vowelCount--;

    if (isVowel(s[i]))
    vowelCount++;

    maxVowel = max(maxVowel, vowelCount);
}

return maxVowel;
    }
};