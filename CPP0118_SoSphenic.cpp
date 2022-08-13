#include<iostream>
#include<cmath>
using namespace std;
int check(int n){
	int count =0;
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0){
			count +=1;
			n/=i;
		}
		if(n%i==0){
			return 0;
		}
	}
	if(n>1){
		count+=1;
	}
	if(count==3) return 1;
	return 0;
}
int main(){
	int t;cin>>t;
	while(t--){
		int n;cin>>n;
		cout<<check(n)<<endl;
	}
}
