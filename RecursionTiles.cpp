#include <iostream>
using namespace std;
int buildWall(int n){
    if(n<=3){
        return 1;
    }
    return buildWall(n-1)+buildWall(n-4);
}
int main() {
    int n;
    cin>>n;
    cout<<buildWall(n);
    return 0;
}
