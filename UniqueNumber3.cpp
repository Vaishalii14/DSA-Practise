#include<iostream>
using namespace std;
int main() {
	int n;
	cin>>n;
	int no;
	int sum[64]={0};
	for(int i=0;i<n;i++){
		cin>>no;
		int j=0;
		while(no>0){
			int last_bit=(no&1);
			sum[j]+=last_bit;
			j++;
			no=no>>1;
		}
	}
	int p=1;
	int ans=0;
	for(int i=0;i<64;i++){
		sum[i]=sum[i]%3;
		 ans+= p*sum[i];
		p=p*2;
	}
	cout<<ans;

	return 0;
}
