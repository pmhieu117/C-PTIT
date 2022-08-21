#include<iostream>
using namespace std;
long long mod = 1e9+7;
long long pow (long long x,long long n){
	if(n==0) return 1;
	if(n==1) return x%mod;
	long long res = (pow(x,n/2)%mod * pow(x,n/2)%mod)%mod;
	if(n%2==0){
		return res;
	}else if(n%2==1){
		return (res*x)%mod;
	}
}
int main(){
	int t;cin>>t;
	while(t--){
	long long n,x;cin>>n>>x;
	long long a[n];
	for(long long i=n-1;i>=0;i--){
		cin>>a[i];
	}
	long long ans = 0;
	for(long long i=0;i<n;i++){
		long long tmp = (a[i]*pow(x,i))%mod;
		ans = (ans%mod + tmp) %mod;
	}
	cout<<ans<<endl;
}}

