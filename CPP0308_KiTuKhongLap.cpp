#include<iostream>
#include<string>
using namespace std;
int main(){
	int t;cin>>t;
	while(t--){
		string s;cin>>s;
		int check[30]={0};
		for(int i=0;i<s.length();i++){
			check[s[i]-'A']+=1;
		}
		for(int i=0;i<s.length();i++){
			if(check[s[i]-'A']==1){
				cout<<s[i];
			}
		}
		cout<<endl;
	}
}
