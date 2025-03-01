#include<bits/stdc++.h>
using namespace std;

int main(){
	vector<int>v = {1, 2, 3, 4};
	// vector<int> :: iterator it = v.begin();
	// for(it ; it!=v.end();it++){
	// 	cout<<(*it)<<" ";
	// }
	// cout<<endl;

	vector<pair<int,int>>p = {{1,2}, {2,3}, {3,4}};
	vector<pair<int,int>> :: iterator it;
	for(it = p.begin(); it != p.end(); it++){
		cout<<(*it).first<<" "<<(*it).second<<endl;
	}
	for(it = p.begin(); it != p.end(); it++){
		cout<<it->first<<" "<<it->second<<endl;
	}
}