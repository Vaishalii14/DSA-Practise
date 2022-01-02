#include <iostream>
using namespace std;
int merge(int arr[],int start,int end){
    int mid=(start+end)/2;
    int i=start;
    int k=start;
    int j=mid+1;
    int temp[1000];
    int count=0;
    while(i<=mid and j<=end){
        if(arr[j]>=arr[i]){
            temp[k++]=arr[i++];
        }
        else{
            temp[k++]=arr[j++];
            count+=mid-i+1;
        }
    }
        for(int m=start;m<end;m++){
           arr[m]=temp[m];
        }
    return count;
}
int inversion(int arr[],int start,int end){
    if(start>=end){
        return 0;
    }
    int mid=(start+end)/2;
    int x=inversion(arr,start,mid);
    int y=inversion(arr,mid+1,end);
    int z=merge(arr,start,end);
    return x+y+z;

}
int main() {
    int arr[]={1,5,2,6,0};
    int n=5;
    cout<<inversion(arr,0,n-1);
    return 0;
}
