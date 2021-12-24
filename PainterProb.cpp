#include <bits/stdc++.h>
using namespace std;
bool possible(int k,int n,int boards[],int mid){
    int painter=1;
    int area=0;
    for(int i=0;i<n;i++){
        if(area+boards[i]>mid){
            painter++;
            if(painter>k){
                return false;
            }
        }
        else{
            area+=boards[i];
        }
    }
    return true;
}
int main() {
    int k=2;
    int n=2;
    int boards[10]={1,10};
    int sum=0;
    int start=*max_element(boards,boards+n);
    for(int i=0;i<n;i++){
        sum+=boards[i];
    }
    int end=sum,mid,ans;
    while(end>=start){
        mid=(start+end)/2;
        if(possible(k,n,boards,mid)){
            end=mid-1;
            ans=mid;
        }
        else{
            start=mid+1;
        }
    }
    cout<<ans;
    return 0;
}
