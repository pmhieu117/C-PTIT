#include <bits/stdc++.h> 
using namespace std; 

bool snt(int n){
	if (n<2) return false;
	else for(int i=2;i<=sqrt(n);i++){
		if(n%i==0) return false;
	}
	return true;
}


int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		for(int i=1;i<=n;i++){
			if(i%2==0) cout << "2" << " ";
			else if(i==1) cout << "1" << " ";
			
			else if(snt(i)==true){
				cout << i << " ";
			}
			else{
				for(int j=2;j<=sqrt(i);j++){
					if(i%j==0){
						cout << j << " ";
						break;
					}
				}
			}
		}
		cout << endl;		
	}
}

