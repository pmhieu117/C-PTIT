#include<iostream> 
using namespace std; 
int main() { 
	int t; 
	cin >> t; 
	while(t--) { 
		int n; 
		cin >>n; 
		int a[n]; 
		int m=1; 
		for(int i=0;i<n-1;i++){ 
			cin >> a[i]; 
		}
		for(int i=0;i<n-1;i++){
			if(a[i]<0) {
				a[i]=0; 
			}
			if(a[i]==m) m++; 
		} 
		cout << m <<endl; 
	} 
}



