class Solution {
public:
    vector<int> searchRange(vector<int>& arr, int target) {
        int end=arr.size()-1;
        int start=0;
        int flag=0;
        int mid;
        while(end>=start){
             mid=(start+end)/2;
            if(arr[mid]==target){
                flag=1;
                break;
            }
            else if(arr[mid]>target){
                end=mid-1;
            }
            else{
                start=mid+1;
            }
        }
        if(flag==0){
            return {-1,-1};
        }
        start=mid;
        end=mid;
        while(arr[start]==target and start>0){
            start--;
        }
        while(arr[end]==target and end<arr.size()-1){
            end++;
        }
        if(arr[start]==target and arr[end]==target){
            return {start,end};
        }
        else if(arr[start]==target and start==0){
            return {start,end-1};
        }
        else if(arr[end]==target and end==arr.size()-1){
            return {start+1,end};
        }
        return {start+1,end-1};
    }
};