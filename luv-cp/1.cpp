#include<bits/stdc++.h>

using namespace std;

string reversewords(string str){
    int n = str.size();
    string result="";
    for(int i=n;i>=0;i--){
        string st="";
        while(str[i]!=' '){
            st=st+str[i];
            i--;
        }
        result=result+st;
        result=result+' ';
    }
    return result;

    

}

int main(){
    string str;
    cin>> str;
    string str1=reversewords(str);
    cout<<str1<<endl;

}