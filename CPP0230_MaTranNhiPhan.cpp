#include<bits/stdc++.h> 
using namespace std; 

int main() { 
	int n;
	cin >> n;
	int dem0=0;
	int dem1=0;
	int dem =0;
	int a[n][3];
	for(int i=0;i<n;i++){
		for(int j=0;j<3;j++){
			cin >> a[i][j];
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<3;j++){
			if(a[i][j]==1) dem1++;
			else dem0++;
		}
		if(dem1 > dem0) dem++;
		dem1=0;
		dem0=0;	
	}	
	cout << dem ;							
}





