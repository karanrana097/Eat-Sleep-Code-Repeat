#include<bits/stdc++.h>
using namespace std;

void printVec(vector<int> &v){
	cout<<"size: "<<v.size()<<endl;
	for(int i=0;i<v.size();i++){
		cout<<v[i]<<" ";
	}
	cout<<endl;
}

void printStrVec(vector<string> &v){
	cout<<"size: "<<v.size()<<endl;
	for(int i=0;i<v.size();i++){
		cout<<v[i]<<endl;
	}
}

int main(){
	// vector<int> v;
	// v.push_back(7);
	// v.push_back(8);

	// printVec(v);

	// vector<int> v2 = v; //O(n);
	// v2.push_back(5);
	// printVec(v);
	// printVec(v2);

	vector<string>v;
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		string s;
		cin>>s;
		v.push_back(s);
	}
	printStrVec(v);
}