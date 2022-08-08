#include<iostream>
#include<string>
using namespace std;
long long gt(long long n){
	if(n==0) return 1;
	if(n==1) return 1;
	return n*gt(n-1);
}
long long C(long long k,long long n){
	return gt(n) / (gt(k)*gt(n-k));
}
int main(){
	int t;cin>>t;
	while(t--){
		string s;cin>>s;
		long long arr[30]={0};
		for(int i=0;i<s.length();i++){
			arr[s[i]-'a']+=1;
		}
		long long count = s.length();
		for(int i=0;i<30;i++){
			if(arr[i]>1){
				count+=C(2,arr[i]);
			}
		}
		cout<<count<<endl;
	}
}
