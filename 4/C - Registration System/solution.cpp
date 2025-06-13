#include <bits/stdc++.h>
using namespace std;
 
int main() {
	
	int n;
	cin>>n;
	
	unordered_map<string,int> map;
	while(n--){
	    string s;
	    cin>>s;
	    if(map.count(s)==0) { // agar map me nih h
	        cout<<"OK"<<endl;
	        map[s]++;
	        map.insert({s,map[s]});
	    } else{
	        cout<<s;
	        cout<<map[s]<<endl;
	         map[s]++;
	    }
	    
	}
	
 
}