#include<iostream>
using namespace std;
int ucln(int a,int b){
	if(b==0) return a;
	return ucln(b,a%b);
}
bool prime(int n){
	if(n<=3){
		return n>1;
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
bool check(int i,int x){
	if(ucln(i,x)==1){
		return true;
	}
	return false;
}
int main(){
	int t;cin>>t;
	while(t--){
		int n;cin>>n;
		int count =0;
		for(int i=1;i<=n;i++){
			if(check(i,n)){
				count += 1;
			}
		}
		if(prime(count)){
			cout<<"1"<<endl;
		}else{
			cout<<"0"<<endl;
		}
	}
}
