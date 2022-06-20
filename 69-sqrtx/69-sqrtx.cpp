class Solution {
public:
    int mySqrt(int x) {
        if(x==0 or x==1){
            return x;
        }
        int start=1;
        int end=x/2;
        long long mid;
        while(end>=start){
            mid=(start+end)/2;
            if(mid*mid==x){
                return mid;
            }
            else if(mid*mid>x){
                end=mid-1;
            }
            else{
                start=mid+1;
            }
        }
        if(mid*mid>x){
            return mid-1;
        }
        else{
            return mid;
        }
    }
};