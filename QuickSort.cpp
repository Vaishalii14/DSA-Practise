#include <iostream>
using namespace std;
int partition(int arr[],int start,int end){
    int i=start-1;
    int j=start;
    int pivot=arr[end];
    for(;j<=end-1;j++){
        if(arr[end]>arr[j]){
            i++;
            swap(arr[i],arr[j]);
        }
        else{
            j++;
        }
    }
    swap(arr[i+1],arr[end]);
    return i+1;
}
void QuickSort(int arr[],int start,int end){
    if(start>=end){
        return;
    }
    int p=partition(arr,start,end);
    QuickSort(arr,start,p-1);
    QuickSort(arr,p+1,end);
 
}
int main() {
    int arr[]={2,7,8,6,1,5,4};
    int n=7;
    QuickSort(arr,0,n-1);
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }
    return 0;
}
