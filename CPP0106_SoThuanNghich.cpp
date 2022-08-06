#include<bits/stdc++.h>
using namespace std;
unsigned long long nd(unsigned long long n){
	unsigned long long tmp = 0;
	while(n>0){
		int res = n%10;
		tmp = tmp*10 + res;
		n /= 10;
	}
	return tmp;
}
int main(){	
	int t;
	cin >> t;
	while(t--){
		unsigned long long n;
		cin >> n;
		if(n == nd(n)){
			cout << "YES" << endl;
		}
		else cout << "NO" << endl;
	}
}


