#include<iostream>
using namespace std;
long long pow(long long x,long long y,long long p){
	if(y==0) return 1;
	if(y==1) return x;
	long long res = (pow(x,y/2,p)%p * pow(x,y/2,p)%p)%p;
	if(y%2==0){
		return res;
	}else{
		return (res%p * x%p)%p;
	}
}
int main(){
	int t;cin>>t;
	while(t--){
		long long x,y,p;cin>>x>>y>>p;
		cout<<pow(x,y,p)<<endl;
	}
}
