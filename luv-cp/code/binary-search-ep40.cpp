//Binary search EP 40

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0 ; i<n ; i++){
        cin>>v[i];
    }
    int to_find;
    cin>>to_find;

    int lo = 0, hi = n-1;
    int mid;
    while(hi-lo>1){
        mid=(hi+lo)/2;
        if(v[mid] < to_find){
            lo = mid+1;
        }
        else{
            hi = mid;
        }
    }
    if(v[lo] == to_find){
        cout<<lo;
    }
    else if(v[hi] == to_find){
        cout<<hi;
    }
    else{
        cout<<"Not Found";
    }
}