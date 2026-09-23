class Solution {
public:
    int maxArea(vector<int>& height) {
      
        int j= height.size()-1;
        int i=0;
        int maxarea= 0;
        while(i<j){
            int h = min(height[i],height[j]);
            int currarea= h*(j-i);
            maxarea= max(maxarea,currarea);
            if(height[i]<height[j]){
                i++;
            }else{
                j--;
            }
        }
        return maxarea;
    }
};