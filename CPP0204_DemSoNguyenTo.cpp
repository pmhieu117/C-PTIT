#include<iostream>
using namespace std;
bool prime (long long n){
	if(n<=3){
		return n>1;
	}else if(n%2==0 || n %3==0){
		return false;
	}
	long long i = 5;
	while(i*i<=n){
		if(n%i==0 || n%(i+2)==0){
			return false;
		}
		i+=6;
	}
	return true;
}
int main(){
	int t;cin>>t;
	while(t--){
		long long l,r;cin>>l>>r;
		long count =0;
		for(long long i=l;i<=r;i++){
			if(prime(i)){
				count +=1;
			}
		}
		cout<<count<<endl;
	}
}
