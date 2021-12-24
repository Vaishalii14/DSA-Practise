#include <iostream>
using namespace std;
bool cowsPlace(int stalls[],int n,int sep,int c){
    int last=stalls[0];
    int count=1;
    for(int i=1;i<n;i++){
        if((stalls[i]-last)>=sep){
            last=stalls[i];
            count++;
        }
        if(count==c){
            return true;
        }
    }
    return false;
}
int main() {
    int stalls[10]={1,2,4,8,9};
    int n=5;
    int s=0,mid;
    int e=stalls[n-1]-stalls[0];
    int cows=3;
    int ans=0;
    while(e>=s){
        mid=(s+e)/2;
        bool place=cowsPlace(stalls,n,mid,cows);
        if(place){
            s=mid+1;
            ans=mid;
        }
        else{
            e=mid-1;
        }
    }
    cout<<ans;
    return 0;
}
