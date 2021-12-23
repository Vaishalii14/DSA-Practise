class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int i=0,j=nums.size()-1;
        vector<int> answer;
        while(j>=i){
            if(nums[i]*nums[i]>nums[j]*nums[j]){
                answer.push_back(nums[i]*nums[i]);
                i++;
            }
            else{
                answer.push_back(nums[j]*nums[j]);
                j--;
            }
        }
      reverse(answer.begin(),answer.end());
        return answer;
    }
};
