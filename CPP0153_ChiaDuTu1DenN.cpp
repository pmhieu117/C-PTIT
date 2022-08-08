#include<iostream>
using namespace std;
int main(){
	int t;cin>>t;
	while(t--){
		int n;cin>>n;
		long long k;cin>>k;
		if(n<=k){
			cout<<(n+1)*n/2<<endl;
		}else{
			long long tmpK=k-1;
			long long sum1 = (tmpK+1)*tmpK/2;
			long long count = n/k  + 1;
			sum1*=count;
			int mod = n%k;
			int tmpMod = mod+1;
			sum1-= (tmpK+tmpMod)*(tmpK-tmpMod+1)/2;
			cout<<sum1<<endl;
		}
	}
}
