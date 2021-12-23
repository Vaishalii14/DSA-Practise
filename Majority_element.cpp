class Solution {
public:
    int majorityElement(vector<int>& nums) {
     unordered_map<int,int>hash;
    for(int i=0;i<nums.size();i++){
        if(hash.count(nums[i])){
            hash[nums[i]]++;
        }
        else{
            hash[nums[i]]=1;
        }
    }
        int n=nums.size(),value;
        for(auto it:hash){
            if((it.second)>n/2){
                value=it.first;
            }
        }
        return value;
    }
};
