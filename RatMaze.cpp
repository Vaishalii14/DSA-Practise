#include <iostream>
using namespace std;
bool ratMaze(char arr[10][10],int i,int j,int m,int n,int sol[10][10]){
    if(i==m and j==n){
        sol[i][j]=1;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                cout<<sol[i][j]<<" ";
            }
            cout<<endl;
        }
        cout<<endl;
        return true;        
    }
    if(arr[i][j]=='X'){
        return false;
    }
    if(i>m or j>n){
        return false;
    }
    sol[i][j]=1;
    bool right=ratMaze(arr,i,j+1,m,n,sol);
    bool left=ratMaze(arr,i+1,j,m,n,sol);
    sol[i][j]=0;
    if(right or left){
        return true;
    }
    return false;
    }
int main() {
    int arr[][10]={"0000",
                   "00X0",
                   "000X",
                   "0X00" ,
     };
    int m,n;
    cin>>m>>n;
    int sol[10][10]={0};
    ratMaze(arr,0,0,m,n,sol);
    return 0;
}
