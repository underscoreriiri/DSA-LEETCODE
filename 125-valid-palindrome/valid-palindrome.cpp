class Solution {
public:
    bool isPalindrome(string s) {
        
        string result="";
    for(char &c : s){
        if(isalnum(c)){
            result+=tolower(c);
            
           
        }
        
    }
    string rev= result;
        reverse(result.begin(),result.end());
    

        
        return rev==result;
    }
};