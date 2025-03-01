//Monk and the Magical Candy Bags
/*
Problem
Our Monk loves candy!
While taking a stroll in the park, he stumbled upon N Bags with candies. 
The i'th of these bags contains Ai candies.
He picks up a bag, eats all the candies in it and drops it on the ground. 
But as soon as he drops the bag, the number of candies in the bag increases magically! 
Say the bag that used to contain X candies (before eating), 
now contains [X/2] candies! ,
where [x] is the greatest integer less than x (Greatest Integer Function).
Amazed by the magical spell, Monk can now have a lot more candies! 
But he has to return home in K minutes. In a single minute,
Monk can consume all the candies in a single bag, regardless of the number of candies in it.
Find the maximum number of candies that Monk can consume.

Input:
First line contains an integer T. T test cases follow.
First line of each test case contains two space-separated integers N and K.
Second line of each test case contains N space-separated integers,
the number of candies in the bags.

Output:
Print the answer to each test case in a new line.

Constraints:
1 ≤ T ≤ 10
1 ≤ N ≤ 10^5
0 ≤ K ≤ 10^5
0 ≤ Ai ≤ 10^10
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
		int n,k;
		cin>>n>>k;
		long long max_candies=0;
		multiset<long long> candies;
		for(int i=0;i<n;i++){
			long long x;
			cin>>x;
			candies.insert(x);
		}
		for(int i=0;i<k;i++)
		{
			auto it = --candies.end();
			long long x = *it;
			max_candies += x;
			candies.insert(x/2);
			candies.erase(it);
		}
		cout<<max_candies<<endl;
	}
}
