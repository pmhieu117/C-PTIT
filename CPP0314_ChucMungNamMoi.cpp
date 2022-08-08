#include<iostream>
#include<string>
#include<set>
using namespace std;
int main(){
	int n;cin>>n;
	cin.ignore();
	set<string> set;
	for(int i=0;i<n;i++){
		string tmp;getline(cin,tmp);
		set.insert(tmp);
	}
	cout<<set.size()<<endl;
}
