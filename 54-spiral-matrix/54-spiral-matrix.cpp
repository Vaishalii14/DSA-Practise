class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int n=matrix.size();
        int m=matrix[0].size();
        vector<int>ans;
        int direction=1;
        int top=0,left=0,right=m-1,bottom=n-1;
        while(right>=left and bottom>=top){
            if(direction==1){
              for(int j=left;j<=right;j++){
                  ans.push_back(matrix[top][j]);
              }
                  direction=2;
                  top++;
                
            }
            else if(direction==2){
                for(int i=top;i<=bottom;i++){
                  ans.push_back(matrix[i][right]);
                }
                  direction=3;
                  right--;
              
                
            }
            else if(direction==3){
                for(int j=right;j>=left;j--){
                  ans.push_back(matrix[bottom][j]);
                }
                  direction=4;
                  bottom--;
               
                
            }
            else if(direction==4){
               for(int i=bottom;i>=top;i--){
                  ans.push_back(matrix[i][left]);
               }
                  direction=1;
                  left++;
                
            }
        }
        return ans;
    }
};

          