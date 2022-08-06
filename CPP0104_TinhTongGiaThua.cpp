#include<bits/stdc++.h>
using namespace std;
unsigned long long gt(unsigned long long n){
	if (n==1) return 1;
	else return n*gt(n-1);
}
int main(){	
	unsigned long long n;
	cin >> n;
	unsigned long long sum = 0; 
	for(int i = 1; i<=n; i++){
		sum += gt(i);
	}
	cout << sum;
}
