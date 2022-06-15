class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int curr_best=nums[0];
        int best=nums[0];
        for(int i=1;i<nums.size();i++){
             curr_best=max(nums[i],nums[i]+curr_best);
            cout<<curr_best<<" ";
                if(curr_best>best){
                    best=curr_best;
                }
        }
        return best;
    }
};