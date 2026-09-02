class Solution {
public:
    int maxSatisfied(vector<int>& customers, vector<int>& grumpy, int minutes) {
        int happy = 0;
        int n = customers.size(); 
        for(int i=0;i<n;i++){
        if(grumpy[i]==0){
            happy = happy + customers[i];
        }
         }
         int extra=0;

        for(int i=0;i<minutes;i++){
            if(grumpy[i]==1){
                extra = extra + customers[i];
                }
        }
        int maxextra= extra;
        int j=0;

        for(int i= minutes;i<n;i++){
            if(grumpy[j]==1){
                extra= extra - customers[j];
            }
            if(grumpy[i]==1){
                extra = extra + customers[i];
                }
                j++;

            maxextra = max(maxextra,extra);
          }

          int result = happy + maxextra;
          return result;
        
    }
};