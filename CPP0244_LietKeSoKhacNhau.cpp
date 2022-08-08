#include<iostream>
#include<set>
using namespace std;
int main(){
	int n;cin>>n;
	set<int> set;
	int tmp;
	for(int i=0;i<n;i++){
		cin>>tmp;
		set.insert(tmp);
	}
	for(auto i:set){
		cout<<i<<" ";
	}
}
