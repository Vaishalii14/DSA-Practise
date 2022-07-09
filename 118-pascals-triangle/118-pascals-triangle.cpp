class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;
        vector<int>v(1,1);
        ans.push_back(v);
        if(numRows==1){
            return ans;
        }
        ans.push_back({1,1});
            int left=2;
        while(left<numRows){
            vector<int> v(left+1);
            v[0]=1;
            for(int i=1;i<left;i++){
                v[i]=ans[left-1][i-1]+ans[left-1][i];
            }
            v[left]=1;
            ans.push_back(v);
            left++;
        }
        return ans;
    }
};
/*
vector<vector<int>> ret;
	for (int i = 0; i < numRows; i++) {
		vector<int> row(i + 1, 1);
		for (int j = 1; j < i; j++) {
			row[j] = ret[i - 1][j] + ret[i - 1][j - 1];
		}
		ret.push_back(row);
	}
	return ret;
    */