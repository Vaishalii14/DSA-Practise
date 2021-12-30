#include<iostream>

using namespace std;
int main() {
	int n;
	cin>>n;
	int arr[100000];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int ans=arr[0];
	for(int i=1;i<n;i++){
		ans=(ans^arr[i]);
	}
	int temp=ans;
	int pos=0;
	while((temp&1)!=1){
		temp=temp>>1;
		pos++;
	}
	int a=0;
	int mask=(1<<pos);
	for(int i=0;i<n;i++){
		
		if((arr[i]&mask)>0){
			a=(a^arr[i]);
		}
	}
	int b=(a^ans);
	cout<<min(a,b)<<" ";
	cout<<max(a,b);
	


	return 0;
}
