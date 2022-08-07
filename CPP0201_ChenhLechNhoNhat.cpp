#include <bits/stdc++.h> 
using namespace std; 
int main() { 
	int t; 
	cin >> t; 
	while(t--) {
		int n; 
		cin >> n; 
		int a[n]; 
		for(int i = 0; i<n; i++) { 
			cin >> a[i]; 
		} 
		sort(a,a+n); 
		int tmp = a[n-1] - a[n-2]; 
		for(int i = n-2; i>0; i--) { 
			if((a[i]-a[i-1]) < tmp) tmp = a[i] - a[i-1]; 
		}
		cout << tmp << endl; 
	} 
}


