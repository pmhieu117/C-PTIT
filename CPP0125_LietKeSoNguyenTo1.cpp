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
	int a,b;
	cin >> a >> b;
	if(a<b){
	
		for(int i=a;i<b;i++){
			if(snt(i)==true){
				cout << i << " "; 
			}
		}
	}
	else if(a>b){
		for(int i=b;i<a;i++){
			if(snt(i)==true){
				cout << i << " "; 
			}
		}
	}
}

