#include<iostream>
#include<algorithm>
using namespace std;
int main(){
	int t;cin>>t;
	while(t--){
		int n;cin>>n;
		int arr[n];
		for(int i=0;i<n;i++){
			cin>>arr[i];
		}
		sort(arr,arr+n);
		int l=0,r=n-1;
		while(l<r){
			cout<<arr[r]<<" ";
			cout<<arr[l]<<" ";
			r--;
			l++;
		}
		if(l-r!=1){
			cout<<arr[n/2]<<endl;
		}else{
			cout<<endl;
		}
	}
}
