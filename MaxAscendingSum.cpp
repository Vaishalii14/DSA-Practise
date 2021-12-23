class Solution {
public:
    int maxAscendingSum(vector<int>& nums) {
        int max_so_far=nums[0],max_ending_here=nums[0];
      for(int i=1;i<nums.size();i++){
          if(nums[i]>nums[i-1]){

              max_ending_here=max_ending_here+nums[i];
          }
          else{

              max_ending_here=nums[i];

          }
              if (max_so_far < max_ending_here)
            max_so_far = max_ending_here;

      }
        return max_so_far;
    }
};
