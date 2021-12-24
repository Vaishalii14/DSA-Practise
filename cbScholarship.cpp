#include <iostream>
using namespace std;
bool possible(int n,int m,int x,int y,int mid){
    int available;
    if((mid*x)<=(m+(n-mid)*y)){
        return true;
    }
    else{
    return false;
    }
}
int main() {
    int n=5;
    int m=10;
    int x=2,y=1;
   int start=0;
   int end=n,mid,ans=0;
   while(end>=start){
       mid=(start+end)/2;
       if(possible(n,m,x,y,mid)){
           ans=mid;
           start=mid+1;
       }
       else{
           end=mid-1;
       }
   }
   cout<<ans;
   return 0;
}
