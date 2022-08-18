#include<iostream>
using namespace std;
long long pow(long long a,long long b){
	if(b==0) return 1;
	if(b==1) return a;
	long long res = pow(a,b/2) * pow(a,b/2);
	if(b%2==0){
		return res;
	}else{
		return res * a;
	}
}
long long ucln(long long a,long long b){
	if(b==0) return a;
	return ucln(b,a%b);
}
long long bcnn(long long a,long long b){
	return a*b/ucln(a,b);
}
int main(){
	int t;cin>>t;
	while(t--){
		long long x,y,z,n;
		cin>>x>>y>>z>>n;
		long long tmp = bcnn(x,bcnn(y,z));
		long long l=pow(10,n-1);
		long long r=pow(10,n)-1;
		long long res = l/tmp;
		if(res*tmp>=l && res*tmp<=r){
			cout<<res*tmp<<endl;
		}else if((res+1)*tmp>=l && (res+1)*tmp<=r){
			cout<<(res+1)*tmp<<endl;
		}else{
			cout<<"-1"<<endl;
		}
	}
}
