#include<iostream>
using namespace std;
int main(){
	int t;cin>>t;
	int fibo[1005]={0};
	fibo[0]=1;
	fibo[1]=1;
	int l=0,r=1;
	while(l+r<=1000){
		int tmp=l+r;
		fibo[tmp]=1;
		l=r;
		r=tmp;
	}
	while(t--){
		int n;cin>>n;
		int a[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
			if(fibo[a[i]]==1){
				cout<<a[i]<<" ";
			}
		}
		cout<<endl;
	}
}
