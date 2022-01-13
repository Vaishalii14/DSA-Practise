#include <bits/stdc++.h>
using namespace std;
bitset<30>col,d1,d2;
void solve(int r,int n,int &ans){
    if(r==n){
        ans++;
        return;
    }
    for(int c=0;c<n;c++){
        if(!col[c] and !d1[r+c] and !d2[r-c+n-1]){
            col[c]=d1[r+c]=d2[r-c+n-1]=1;
            solve(r+1,n,ans);
            col[c]=d1[r+c]=d2[r-c+n-1]=0;
        }
    }
}
int main() {
    int n;
    cin>>n;
    int ans=0;
    solve(0,n,ans);
    cout<<ans;
    return 0;
}
