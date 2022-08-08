#include<bits/stdc++.h>
using namespace std;

int f[20];
bool fibo[1005];

int main() {
	f[0] = 0;
	f[1] = f[2] = 1;
	fibo[0] = fibo[1] = fibo[2] = 1;
	for(int i=3; i<=20; i++) {
		f[i] = f[i-1] + f[i-2];
		fibo[f[i]] = 2;
	}
	int t;
	cin >> t;
	while(t--) {
		int n; cin >> n;
		int a[n+5];
		for(int i=0; i<n; i++) {
			cin >> a[i];
			if(fibo[a[i]])
				cout << a[i] << " ";
		}
		cout << endl;	
	}
}

