class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();
        unordered_map<int,int> pos;
        vector<int> result;
        for(int i=0;i<n;i++){
            if(pos.count(target-nums[i])){
               result.push_back(pos[target - nums[i]]); 
               result.push_back(i);
                return result;
            }
            else{
                pos[nums[i]]=i;
            }
        }
        return result;
       
    }
};
