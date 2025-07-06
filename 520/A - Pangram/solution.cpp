#include <bits/stdc++.h>
using namespace std;
 
int main() {
	
	int n;
	cin>>n;
	string s;
	cin>>s;
	
	unordered_set<char> alphabet;
	for(char ch: s){
	    alphabet.insert(tolower(ch));
	}
	
	cout<<(alphabet.size()==26? "YES":"NO");
}