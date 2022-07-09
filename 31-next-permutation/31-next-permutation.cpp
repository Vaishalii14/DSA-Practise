
class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int index1=0;
        int index2=0;
        
        for(int i=nums.size()-2;i>=0;i--){
            if(nums[i]<nums[i+1]){
                index1=i;
                break;
            }
        }
       //cout<<index1<<" ";
        for(int i=nums.size()-1;i>index1;i--){
            if(nums[i]>nums[index1]){
                index2=i;
                break;
            }
        }
        //cout<<index2<<" ";
        if(index1==0 and index2==0){
            reverse(nums.begin(),nums.end());
            return;
        }
        swap(nums[index1],nums[index2]);
        reverse(nums.begin()+index1+1,nums.end());
    }
};