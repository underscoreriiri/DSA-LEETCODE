class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        int maxsum=0;
        for(int i=0;i<k;i++){
            maxsum += arr[i];
             }
        int avg1= maxsum/k;

        int count =0;
        if(avg1 >= threshold) {
            count++;
            }
        for(int i=k;i<arr.size();i++){
            maxsum = maxsum - arr[i-k];
            maxsum = maxsum + arr[i];
            int avg = maxsum/k;
            if(avg >= threshold){
                count++;
            }
        }  
        return count;
    }
};