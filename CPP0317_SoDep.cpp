#include<iostream>
#include<string>
using namespace std;
bool check(string s){
	int l=0,r=s.length()-1;
	while(l<=r){
		if(s[l]!=s[r]||(int)s[l]%2==1){
			return false;
		}
		l++;
		r--;
	}
	return true;
}
int main(){
	int t;cin>>t;
	while(t--){
		string s;cin>>s;
		if(check(s)){
			cout<<"YES"<<endl;
		}else{
			cout<<"NO"<<endl;
		}
	}
}
