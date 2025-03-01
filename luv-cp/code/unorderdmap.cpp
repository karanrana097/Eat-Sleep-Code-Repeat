#include<bits/stdc++.h>
using namespace std;
//unorded map uses hash tables with O(1) time complexity;
void printMap(unordered_map<int,string> &m){
	cout<<m.size()<<endl;
	for(auto &pr : m){
		cout<<pr.first<<" "<<pr.second<<endl;
	}
	cout<<endl; 
}

int main(){
	unordered_map<int,string> m;
	m[1] = "abc";//O(1;
	m[2] = "def";
	m.insert(make_pair(3,"ghi"));
	m.insert({4,"jkl"});
	//cannot use complex data structres in unordered map like vectors sets etc only primitive data structures.

	auto itm = m.find(7); //O(1);
	if(itm==m.end()){
		cout<<"No Value"<<endl;
	}else{
		cout<<itm->first<<" "<<itm->second<<endl;
	}
	if(itm != m.end()){
		m.erase(it); //O(log(1))
	}
	// m.clear();
	printMap(m);  

}



















