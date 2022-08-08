#include<iostream>
#include<set>
#include<string>
using namespace std;
int main(){
	int t;cin>>t;
	while(t--){
		int n;cin>>n;
		int arr[n];
		set<int> ans;
		for(int i=0;i<n;i++){
			string s;cin>>s;
			for(int j=0;j<s.length();j++){
				ans.insert(s[j]-'0');
			}
		}
		for(int i:ans){
			cout<<i<<" ";
		}
		cout<<endl;
	}
}
