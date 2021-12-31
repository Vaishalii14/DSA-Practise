#include <iostream>
using namespace std;
int search(int *arr,int n,int key){
    if(n==0){
        return -1;
    }
        int i=search(arr+1,n-1,key);
        if(i==-1){
            if(arr[0]==key){
                return 0;
            }
            else{
                return -1;
            }
        }
        return i+1;
    }
   

int main() {
    int arr[10]={1,2,4,6,5,8,4};
    int n;
    cin>>n;
    int key;
    cin>>key;
    cout<<search(arr,n,key);
    return 0;
}
