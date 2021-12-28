class Solution {
public:
    int maxArea(vector<int>& height) {
        int i=0,j=height.size()-1,water=0;
       while(j>i){
            int curr=min(height[i],height[j])*(j-i);
           if(height[j]<height[i]){
               j--;
           } 
            else{
                i++;
            }
             water=max(curr,water);
        }
        return water;
        
    }
};
