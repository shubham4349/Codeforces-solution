#include <bits/stdc++.h>
using namespace std;
 
int main() {
	
 // length of string + unique character
 
 int t;
 cin>>t;
 while(t--){
     int n;
     cin>>n;
     string s; cin>>s;
     
     set<char> hello;
     for(char ch: s) hello.insert(ch);
     
     cout<<n+hello.size()<<endl;
    // hello.clear();
 
 }
 
 
}