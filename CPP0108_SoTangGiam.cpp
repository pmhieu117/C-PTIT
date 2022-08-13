#include<iostream>
using namespace std;
bool prime(long n){
	if(n<=3){
		return n>=1;
	}else if(n%2==0 || n%3==0){
		return false;
	}
	int i=5;
	while(i*i<=n){
		if(n%i==0 || n%(i+2)==0){
			return false;
		}
		i+=6;
	}
	return true;
}
bool increase(long n){
	int tmp=n%10;
	n/=10;
	while(n){
		if(n%10>=tmp){
			return false;
		}
		tmp=n%10;
		n/=10;
	}
	return true;
}
bool reduced(long n){
	int tmp=n%10;
	n/=10;
	while(n){
		if(n%10<=tmp){
			return false;
		}
		tmp=n%10;
		n/=10;
	}
	return true;
}
long long pow(int x,int y){
	if(y==0) return 1;
	if(y==1) return x;
	long long res = pow(x,y/2) * pow(x,y/2);
	if(y%2==0){
		return res;
	}else{
		return res*x;
	}
}
int main(){
	int t;cin>>t;
	while(t--){
		int n;cin>>n;
		int count=0;
		for(long long i=pow(10,n-1);i<pow(10,n);i++){
			if(increase(i) || reduced(i)){
				if(prime(i)){
					count+=1;
				}
			}
		}
		cout<<count<<endl;
	}
}
