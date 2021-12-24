#include <iostream>
#include<climits>
using namespace std;
bool possible(int arr[],int n,int m, int value){
    int student=1;
    int pages_read=0;
    for(int i=0;i<n;i++){
        if((pages_read+arr[i])>value){
            student++;
            pages_read=arr[i];
            if(student>m){
                return false;
            }
        }
            else{
                pages_read+=arr[i];
            }


    }
    return true;
}
int main() {
    int n=4;
    int m=2;
    int books[10]={10,20,30,40};
    int s=books[n-1];
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=books[i];
    }
    int e=sum,mid;
    int ans;
    while(e>=s){
        mid=(s+e)/2;
        if(possible(books,n,m,mid)){
            ans=mid;
            e=mid-1;
        }
        else{
            s=mid+1;
        }
    }
    cout<<ans;
}
