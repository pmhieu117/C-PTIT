#include <bits/stdc++.h> 
using namespace std; 
int main(){ 
	int t; 
	cin>>t;
	while(t--){ 
		int n,k; 
		cin>>n>>k; 
		int a[n][k]; 
		int kq[n*k]; 
		int ok = 0; 
		for(int i=0;i<k;i++){ 
			for(int j=0;j<n;j++){ 
				cin>>a[i][j]; 
				kq[ok++] = a[i][j]; 
			} 
		} 
		sort(kq,kq+n*k); 
		for(int i=0;i<ok;i++){ 
			cout<<kq[i]<<" "; 
		} 
	cout<<endl; 
	} 
}

