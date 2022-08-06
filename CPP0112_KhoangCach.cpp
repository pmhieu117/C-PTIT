#include <bits/stdc++.h>
using namespace std;

double abs(double a, double b){
	if(a>b) return a-b;
	else return b-a;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		double a1,a2,b1,b2;
		cin >> a1 >> a2 >> b1 >> b2;
		double kc = sqrt(pow(abs(a1,b1),2)+pow(abs(a2,b2),2));
		cout << setprecision(4) << fixed << kc << endl;
	}
}
