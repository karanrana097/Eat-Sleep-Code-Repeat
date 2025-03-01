#include<bits/stdc++.h>
using namespace std;

int main(){
	pair<int,string>p;
	p = make_pair(2,"abc");
	p = {2,"abcd"};
	cout<<p.first<<" "<<p.second<<endl;
	int a[] = {1,2,3};
	int b[] = {2,3,4};
	pair<int, int> p_array[3];
	p_array[0] = {1,2};
	p_array[1] = {2,3};
	p_array[2] = {2,4};
	swap(p_array[0],p_array[2]);
	//cin>>p.first;>
}