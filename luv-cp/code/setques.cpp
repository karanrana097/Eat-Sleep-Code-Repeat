/*
Given N strings, print unique strings in lexiographical order.
N <= 10^5
|S| <= 100000
*/

#include<bits/stdc++.h>
using namespace std;

void print(set<string>&s){
	for(string value : s){
		cout<<value<<endl;
	}
}
int main(){
	set<string> s;
	int q;
	cin>>q;
	for(int i=0;i<q;i++){
		string str;
		cin>>str;
		s.insert(str);
	}
	print(s);
}