#include <bits/stdc++.h> 
 
using namespace std; 

bool snt(int n){
	if(n<2) return false;
	else for(int i=2;i<=sqrt(n);i++){
		if(n%i==0) return false;
	}
	return true;
}

int main() { 
	int t;
	cin >> t;
	while(t--){
		int n,m;
		cin >> n >> m;
		if(n>m){
			for(int i=m;i<=n;i++){
				if(snt(i)==true){
					cout << i << " ";
				}
			}
			cout << endl;
		}
		if(n<m){
			for(int i=n;i<=m;i++){
				if(snt(i)==true){
					cout << i << " ";
				}
			}
			cout << endl;
		}
	}
}


