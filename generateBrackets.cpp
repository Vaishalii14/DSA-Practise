#include <iostream>
using namespace std;
void brackets(int n,char out[],int idx,int open,int close){
    if(idx==(2*n)){
        out[idx]='\0';
        cout<<out<<endl;
        return;
    }
    if(open<n){
        out[idx]='(';
        brackets(n,out,idx+1,open+1,close);
    }
    if(close<open){
        out[idx]=')';
        brackets(n,out,idx+1,open,close+1);
    }

}
int main() {
    int n;
    cin>>n;
    char out[1000];
    brackets(n,out,0,0,0);
    return 0;
}
