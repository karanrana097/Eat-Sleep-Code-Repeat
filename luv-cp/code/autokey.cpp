#include<bits/stdc++.h>
using namespace std;

int main(){
	vector<int>v = {1,2,3};
	for(int value : v){
		cout<<value<<" ";
	}
	cout<<endl;
	for(int value : v){
		cout<<++value<<" ";//values are copied not changed in the memory.
	}
	cout<<endl;
	for(int &value : v){
		value++;
		cout<<value<<" ";
	}
	cout<<endl;
	for(int value : v){
		cout<<value<<" ";
	}
	cout<<endl;
	//use of auto keyword to do the same thing.
	for(auto value : v){
		cout<<value<<" ";
	}
	cout<<endl;
	for(auto &value : v){
		cout<<++value<<" ";
	}
	cout<<endl;

	vector<pair<int,int>>v_p = {{1,2},{2,3},{3,4}};
	for(pair<int,int> value : v_p){
		cout<<value.first<<" "<<value.second<<endl;
	}
	cout<<endl;
	for(pair<int,int> &value : v_p){
		cout<<++value.first<<" "<<++value.second<<endl;
	}
	cout<<endl;
	for(auto value : v_p){
		cout<<value.first<<" "<<value.second<<endl;
	}
	cout<<endl;
	for(auto &value : v_p){
		cout<<value.first<<" "<<value.second<<endl;
	}
}