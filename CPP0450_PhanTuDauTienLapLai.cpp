#include<iostream>
#include<set>
using namespace std;
int main(){
	int t;cin>>t;
	while(t--){
		int n;cin>>n;
		int a[n];
		set<int> set;
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		int ok=0;
		for(int i=0;i<n;i++){
			if(set.find(a[i])!=set.end()){
				cout<<a[i]<<endl;
				ok=1;
				break;
			}
			set.insert(a[i]);
		}
		if(ok==0){
			cout<<"-1"<<endl;
		}
	}
}
