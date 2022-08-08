#include<iostream>
#include<string>
using namespace std;
int main(){
	int t;cin>>t;
	while(t--){
		string s;cin>>s;
		int k;cin>>k;
		if(s.length()<26){
			cout<<"0"<<endl;
		}else{
			int count = 0 ;
			int arr[30]={0};
			for(int i=0;i<s.length();i++){
				if(arr[s[i]-'a']==0){
					count +=1;
					arr[s[i]-'a']=1;
				}
			}
			if(count+k>=26){
				cout<<"1"<<endl;
			}else{
				cout<<"0"<<endl;
			}
		}
	}
}
