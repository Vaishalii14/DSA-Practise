class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        deque<int>q;
        vector<int>ans;
        int i;
        for( i=0;i<k;i++){
            while(!q.empty() and nums[i]>nums[q.back()]){
                q.pop_back();
            }
            q.push_back(i);
        }
        ans.push_back(nums[q.front()]);
        for(;i<nums.size();i++){
            while(!q.empty() and q.front()<=i-k){
                q.pop_front();
            }
            while(!q.empty() and nums[q.back()]<nums[i]){
                q.pop_back();
            }
            q.push_back(i);
            ans.push_back(nums[q.front()]);
        }
       return ans; 
    }
};