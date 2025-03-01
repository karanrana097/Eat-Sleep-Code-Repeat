#include<bits/stdc++.h>
using namespace std;
//uses red black trees;
void print(set<string> &s){
	for(string value : s){
		cout<<value<<endl;
	}

}

int main(){
	set<string> s;
	s.insert("abc");//O(log(n))
	s.insert("zsdf");
	s.insert("bcd");
	s.insert("abc");
	auto it = s.find("abc");//log(n)
	// if(it != s.end()){
	// 	s.erase(it);
	// }
	//s.erase("bcd");
	print(s);
}