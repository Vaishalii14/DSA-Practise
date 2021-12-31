#include <iostream>
using namespace std;
int check(int arr[],int n){
    if(n==1){
        return 1 ;
    }
    if(arr[n]<arr[n-1]){
        return 0;
    }
    return check(arr,n-1);
}
int main() {
    int arr[10]={1,2,3,14,5};
    int n=5;
    int ans=check(arr,n-1);
    if(ans==0){
        cout<<"false";
    }
    else{
        cout<<"true";
    }
    return 0;
}
