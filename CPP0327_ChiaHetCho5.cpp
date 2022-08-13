#include<iostream>
#include<string>
using namespace std;
string check(string s){
	int ans = 0;
	for(int i=0;i<s.length();i++){
		if(s[i]=='1'){
			ans = (2*ans+1)%5;
		}else{
			ans = (2*ans+0)%5;
		}
	}
	if(ans){
		return "No";
	}else{
		return "Yes";
	}
}
int main(){
	int t;cin>>t;
	while(t--){
		string s;cin>>s;
		cout<<check(s)<<endl;
	}
}
