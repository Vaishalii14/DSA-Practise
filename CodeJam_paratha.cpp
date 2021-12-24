#include <bits/stdc++.h>
using namespace std;
bool possible(int arr[],int n,int p,int value,int end){
    int sum=0;
    int paratha=0;
    for(int i=0;i<n;i++){
    for(int j=1;j<end;j++){
        sum+=arr[i]*(j);
        if(sum<=value){
            paratha++;
        }
        else{
            break;
        }
        if(paratha>=p){
            return true;
        }
    }
    sum=0;

    }
    return false;
}
int main() {
  int cook=4;
  int p=10;
  int paratha[10]={1,2,3,4};
  int start=0;
  int min_rank=*min_element(paratha,paratha+cook);
  int end=min_rank*((p*(p+1))/2);
  int mid,ans;
    while(end>=start){
    mid=(start+end)/2;
    if(possible(paratha,cook,p,mid,end)){
        ans=mid;
        end=mid-1;
    }
    else{
        start=mid+1;
    }    
    }
    cout<<ans;
    return 0;
}
