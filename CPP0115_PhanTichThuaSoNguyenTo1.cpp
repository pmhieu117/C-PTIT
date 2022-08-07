#include<iostream>
#include<math.h>
using namespace std;
bool snt(int n){
	if(n<2) return false;
	for(int i=2;i<sqrt(n);i++){
		if(n%i==0) return false;
	}
	return true;
}
int main(){
	int t;cin>>t;
	while(t--){
		int n;cin>>n;
		if(n==1){
			cout<<"1 1"<<endl;
		}else{
			for(int i=2;i<=sqrt(n);i++){
				if(snt(i) && n%i==0){
					int dem=0;
					while(n%i==0){
						dem+=1;
						n/=i;
					}
					cout<<i<<" "<<dem<<" ";
				}
			}
			if(n>1){
				cout<<n<<" 1"<<endl;
			}else{
				cout<<endl;
			}
		}
	}
}
