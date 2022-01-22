class Solution {
public:
    int minimumCost(vector<int>& cost) {
        sort(cost.begin(),cost.end(),greater<int>());
        int cp=0;
      for(int i=0;i<cost.size();i++){
          cp+=cost[i++];
          if(i<cost.size())
          cp+=cost[i++];
      }
        return cp;
    }
};