/*Given N strings , print unique strings in lexiographical order with their frequecy.
N<=10^5
|S|<=100
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
	map<string,int>m;
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		string str;
		cin>>str;
		m[str]++;
	}  
	for(auto mp : m){
		cout<<mp.first<<" "<<mp.second<<endl;
	}
}