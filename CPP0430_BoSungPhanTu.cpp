#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int r=0,l=100007;
		int a[n];
		for(int i=0;i<n;i++){
			cin >> a[i];
			if(a[i]>r){
				r=a[i];
			}
			if(a[i]<l){
				l=a[i];
			}
		}
		int b[r-l+1]={0};
		int sum = 0;
		for(int i=0;i<n;i++){
			if(b[a[i]-l]==0){
				b[a[i]-l]=1;
				sum+=1;
			}
		}
		cout << r-l+1-sum << endl;
	}
}



