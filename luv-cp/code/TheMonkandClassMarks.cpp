/*
The Monk and Class Marks
The Monk is supposed to arrange the list in such a manner that 
the list is sorted in decreasing order of marks. 
And if two students have the same marks, 
they should be arranged in lexicographical manner.

Help Monk prepare the same!

Input format:
On the first line of the standard input, 
there is an integer N, denoting the number of students. 
N lines follow, which contain a string and an integer, 
denoting the name of the student and his marks.

Output format:
You must print the required list.

Constraints:
1 <= N <= 105
1 <= | Length of the name | <= 100
1 <= Marks <= 100
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
	map<int,multiset<string>> s;
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		string name;
		int marks;
		cin>>name>>marks;
		s[marks].insert(name); 
	}
	auto cur_it = --s.end();
	while(true){
		auto &student=cur_it->second;
		auto &marks = cur_it->first;
		for(auto &std : student){
			cout<<std<<" "<<marks<<endl;
		}
		if(cur_it == s.begin()) 
			break;
		--cur_it;
	}

}
