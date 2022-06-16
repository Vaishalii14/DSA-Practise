class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>>ans(n,vector<int>(n));
        int top=0,bottom=n-1,left=0,right=n-1;
        int direction=1;
        int num=1;
        while(bottom>=top and right>=left){
            if(direction==1){
                for(int i=left;i<=right;i++){
                    ans[top][i]=num;
                    num++;
                }
                top++;
                direction=2;
            }
            else if(direction==2){
                for(int i=top;i<=bottom;i++){
                    ans[i][right]=num;
                    num++;
                }
                right--;
                direction=3;
            }
            else if(direction==3){
                for(int i=right;i>=left;i--){
                    ans[bottom][i]=num;
                    num++;
                }
                bottom--;
                direction=4;
            }
            else if(direction==4){
                for(int i=bottom;i>=top;i--){
                    ans[i][left]=num;
                    num++;
                }
                left++;
                direction=1;
            }
            
        }
        return ans;
    }
};