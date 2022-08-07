#include<iostream>
#include<math.h>
using namespace std;
bool snt(long n){
	if(n<2) return false;
	for(long i=2;i<sqrt(n);i++){
		if(n%i==0) return false;
	}
	return true;
}
int main(){
		long n;cin>>n;
		if(n==1){
			cout<<"1 1"<<endl;
		}else{
			for(long i=2;i<=sqrt(n);i++){
				if(snt(i) && n%i==0){
					int dem=0;
					while(n%i==0){
						dem+=1;
						n/=i;
					}
					cout<<i<<" "<<dem<<endl;
				}
			}
			if(n>1){
				cout<<n<<" 1"<<endl;
			}
		}
}
