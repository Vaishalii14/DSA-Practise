class Solution {
public:
    int maxChunksToSorted(vector<int>& arr) {
     int count=0,maximum=0;
        for(int i=0;i<arr.size();i++){
            maximum=max(arr[i],maximum);
            if(maximum==i){
                count++;
            }
        }
        return count;
    }
};
