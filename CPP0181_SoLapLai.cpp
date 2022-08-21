#include<iostream>
using namespace std;
long long gcd(long long x,long long y){
	if(y==0) return x;
	return gcd(y,x%y);
}
int main(){
	int t;cin>>t;
	while(t--){
		long long a,x,y;cin>>a>>x>>y;
		long long z = gcd(x,y);
		for(long long i=0;i<z;i++){
			cout<<a;
		}
		cout<<endl;
	}
}
