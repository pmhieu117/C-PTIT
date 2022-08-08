#include<iostream>
#include<vector>
#include <sstream>
using namespace std;
int main(){
	int t;cin>>t;
	cin.ignore();
	while(t--){
		string s;
		getline(cin,s);
		stringstream ss(s);
		vector<string> v;
		string w;
		while(ss>>w){
			v.push_back(w);
		}
		cout<<v.size()<<endl;
	}
}
