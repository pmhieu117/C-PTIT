#include<bits/stdc++.h>
using namespace std;
int check(char a[]){
	int i;
	for(int i = 0; i<strlen(a); i++){
		if(a[i]!='0' && a[i] != '6' && a[i] != '8'){
			return false;
		}
		return true;
	}
}
int main(){	
	int t;
	cin >> t;
	while(t--){
		char a[9];
		cin >> a;
		if(check(a)==true) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
}
