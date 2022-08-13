#include<iostream>
using namespace std;
int main(){
	int t;cin>>t;
	while(t--){
		int n;cin>>n;
		int a[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		int k=n-1;
		while(k>0 && a[k-1]<a[k]){
			k--;
		}
		if(k<0){
			for(int i=0;i<n;i++){
				cout<<i+1<<" ";
			}
		}else{
			int l=k,r=n-1;
			while(l<=r){
				int tmp=a[l];
				a[l]=a[r];
				a[r]=tmp;
				l++;
				r--;
			}
			int tmp1 = a[k];
			a[k]=a[k-1];
			a[k-1]=tmp1;
			for(int i =0;i<n;i++){
				cout<<a[i]<<" ";
			}
		}
		cout<<endl;
	}
}
