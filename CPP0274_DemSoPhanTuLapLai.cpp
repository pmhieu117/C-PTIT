#include<iostream>
#include<map>
using namespace std;
int main(){
	int t;cin>>t;
	while(t--){
		int n;cin>>n;
		int count=0;
		int tmp;
		map<int,int> m;
		for(int i=0;i<n;i++){
			cin>>tmp;
			if(m[tmp]==1){
				count+=1;
				m[tmp]+=1;
				count+=1;
			}else if(m[tmp]>1){
				m[tmp]+=1;
				count+=1;
			}else if(m[tmp]==0){
				m[tmp]=1;
			}
		}
		cout<<count<<endl;
	}
}
