#include<bits/stdc++.h>
using namespace std;
//maps uses red black trees

void printMap(map<int,string> &m){
	cout<<m.size()<<endl;
	for(auto &pr : m){
		cout<<pr.first<<" "<<pr.second<<endl;
	}
	cout<<endl; 
}

int main(){
	map<int,string> m;
	m[1] = "abc";//O(log(n));
	m[2] = "def";
	m.insert(make_pair(3,"ghi"));
	m.insert({4,"jkl"});

	map<int,string> :: iterator it;
	for(it=m.begin();it!=m.end();++it){
		cout<<(*it).first<<" "<<(*it).second<<endl;
	}
	cout<<endl;
	for(it=m.begin();it!=m.end();++it){
		cout<<it->first<<" "<<it->second<<endl;
	}
	
	cout<<endl;
	for(const  pair<int,string> &pr : m){
		cout<<pr.first<<" "<<pr.second<<endl;
	}
	cout<<endl;
	printMap(m);

	auto itm = m.find(7); //O(log(n));
	if(itm==m.end()){
		cout<<"No Value"<<endl;
	}else{
		cout<<itm->first<<" "<<itm->second<<endl;
	}
	if(itm != m.end()){
		m.erase(it); //O(log(n))
	}
	m.clear();
	printMap(m);  

}



















