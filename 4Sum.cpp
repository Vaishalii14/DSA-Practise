vector<vector<int>> fourSum(vector<int>& nums, int target) {
    int n = nums.size();
    sort(nums.begin(), nums.end());
    vector<vector<int>> result;
    
    if(n<4) return result;
    
    for(int i=0 ; i<n-3 ; ++i)
    {
        for(int j=i+1 ; j<n-2 ; ++j)
        {
                int low = j+1;
                int high = n-1;
                int sum;
                int tar = target - nums[i] - nums[j];
                while(low<high)
                {
                    sum = nums[low] + nums[high];
                    if(sum == tar)
                    {
                        result.push_back({nums[i] ,nums[j] ,nums[low] ,nums[high]});
                        while(low<high && nums[low] == nums[low+1]) ++low;
                        while(low<high && nums[high] == nums[high-1]) --high;
                        ++low;
                        --high;
                    }
                    else if(sum>tar) --high;
                    else ++low;

                }
            while(j+1<n && nums[j]==nums[j+1]) ++j;       
        }
        while(i+1<n && nums[i]==nums[i+1]) ++i;
    }
    return result;
}
