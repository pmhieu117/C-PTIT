#include <bits/stdc++.h>
using namespace std;

bool snt(int n){
	if(n<2) return false;
	else for(int i=2;i<=sqrt(n);i++){
		if(n%i==0) return false;
	}
	return true;
}

int main(){
	int t;
	cin >> t;
	while(t--){	
		long long n;
		int dem = 0;
		cin >> n;
		for(int i=1;i<=sqrt(n);i++){
			if(snt(i)==true){
				dem++;
			}
		}
		cout << dem << endl;

	}
}
