#include<iostream> 
using namespace std; 
int main() { 
	int t; 
	cin >> t; 
	while(t--) { 
		int n,x;
		cin >> n >> x;
		int a[n];
		int ok = 0;
		for(int i=0;i<n;i++){
			cin >> a[i];
		}
		for(int i=0;i<n;i++){
			if (a[i]==x){
				ok = 1;
				break;
			}
		}
		if(ok==1) cout << "1" << endl;
		else cout << "-1" << endl;
	} 
}



