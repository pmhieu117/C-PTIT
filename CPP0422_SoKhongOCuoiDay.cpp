#include<iostream>
using namespace std;
int main(){
	int t;cin>>t;
	while(t--){
		int n;cin>>n;
		long long a[n];
		int count =0;
		for(int i=0;i<n;i++){
			cin>>a[i];
			if(a[i]==0){
				count+=1;
			}else{
				cout<<a[i]<<" ";
			}
		}
		for(int i=0;i<count;i++){
			cout<<"0 ";
		}
		cout<<endl;
	}
}
