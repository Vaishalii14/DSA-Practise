class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        stack<int>s;
        int area;
        int max=0;
        int i;
      for( i=0;i<heights.size();i++){
          while( !s.empty() and heights[i]<heights[s.top()]){
               int num=s.top();
                s.pop();
              if(s.empty()){
                  area=heights[num]*i;
              }
              else{
                 
                  area=heights[num]*(i-s.top()-1);
              }
              if(area>max){
                  max=area;
              }
              
          }
          s.push(i);
      } 
        while(!s.empty()){
            int num=s.top();
            s.pop();
            if(s.empty()){
                  area=heights[num]*i;
              }
            else{
            area=heights[num]*(i-s.top()-1);
            }
            if(area>max){
                max=area;
            }
        }
        return max;
    }
};
