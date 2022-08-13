#include<iostream>
#include<cmath>
using namespace std;
int main(){
	int t;cin>>t;
	while(t--){
		long n;cin>>n;
		int count =0;
		while(n%2==0){
			count +=1;
			n/=2;
		}
		int tmp=count;
//		cout<<count<<endl;
		for(int i=1;i<=sqrt(n);i+=2){
			if(n%i==0){
				if(i!=n/i){
					count+=tmp*2;
				}else{
					count+=tmp;
				}
			}
		}
		cout<<count-tmp<<endl;
	}
}
