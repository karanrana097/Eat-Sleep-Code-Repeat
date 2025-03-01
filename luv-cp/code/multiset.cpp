#include<bits/stdc++.h>
using namespace std;
//uses red black trees;
void print(multiset<string> &s){
	for(string value : s){
		cout<<value<<endl;
	}

}

int main(){
	multiset<string> s;
	s.insert("abc");//O(log(n))
	s.insert("zsdf");
	s.insert("bcd");
	s.insert("abc");
	auto it = s.find("abc");//log(n)
	// if(it != s.end()){
	// 	s.erase(it); // only deletes value of iterator.
	// }
	//s.erase("abc"); //delete all the values of abc
	print(s);
}