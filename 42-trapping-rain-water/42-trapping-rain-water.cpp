class Solution {
public:
    int trap(vector<int>& height) {
        stack<int>s;
        int ans=0;
        for(int i=0;i<height.size();i++){
            if(s.empty()){
                s.push(i);
            }
            else if(height[i]>=height[s.top()]){
                while(!s.empty() and height[i]>=height[s.top()]){
                   int h=s.top();
                    s.pop();
                    int right=i;
                    if(!s.empty()){
                        int left=s.top();
                        ans+=(right-left-1)*(min(height[right],height[left])-height[h]);
                    }
                   
                }
                 s.push(i);
            }
                else {
                    s.push(i);
                }
            
        }
        return ans;
    }
};
