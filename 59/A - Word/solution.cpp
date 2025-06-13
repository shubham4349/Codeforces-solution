#include <bits/stdc++.h>
using namespace std;
 
int main() {
	// your code goes here
	// cnt-> lwr > upr -> convert all to lower
	//       lwr <upr -> convert all to upr
	//       lwr==upr cnt-> lwr
	
	string s;
	cin>>s;
	
	int n=s.length();
	
	int lwrcnt=0;
	int uprcnt=0;
	
	for(int i=0; i<n; i++){
	    if(s[i]==tolower(s[i])) lwrcnt++;
	    else uprcnt++;
	}
      if(lwrcnt>uprcnt){
          for(int i=0; i<n; i++){
              s[i] = tolower(s[i]);
          }
      }
      else if(uprcnt>lwrcnt){
          for(int i=0; i<n; i++){
              s[i] = toupper(s[i]);
          }
      }
      else {
          for(int i=0; i<n; i++){
              s[i] = tolower(s[i]);
          }
      }
	
	cout<<s;
	
 
}