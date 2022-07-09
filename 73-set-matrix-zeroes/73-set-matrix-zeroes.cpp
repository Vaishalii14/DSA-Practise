class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        vector<pair<int,int>> v;
        int m=matrix.size();
        int n=matrix[0].size();
      for(int i=0;i<m;i++){
          for(int j=0;j<n;j++){
              if(matrix[i][j]==0){
                  pair<int,int> p;
                  p.first=i;
                  p.second=j;
                  v.push_back(p);
              }
          }
      }
        for(int i=0;i<v.size();i++){
            for(int j=0;j<n;j++){
                matrix[v[i].first][j]=0;
            }
            for(int j=0;j<m;j++){
                matrix[j][v[i].second]=0;
            }
        }
        
        
    }
};