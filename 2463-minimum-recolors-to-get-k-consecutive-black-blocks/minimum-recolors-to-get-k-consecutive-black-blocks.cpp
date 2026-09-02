class Solution {
public:
    int minimumRecolors(string blocks, int k) {
        int count = 0;
        for(int i =0;i<k;i++){
            if(blocks[i]=='W'){
                count = count + 1;
            }
        }
        int mincount = count;
        int j=0;
     for(int i = k ; i<blocks.length();i++){
        if(blocks[i]=='W'){
            count++;
        }
        if(blocks[j]=='W'){
            count--;
        }
        j++;

        mincount = min(mincount,count);
     }

     return mincount;
    }
};