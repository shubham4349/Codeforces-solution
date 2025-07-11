#include <bits/stdc++.h>
using namespace std;
 
int main() {
	
	int n; cin>>n;
	
    // odd pe i hate
    // even posn pe i love
    string ans="";
     for(int i=1; i<=n; i++){
         if(i%2==1) ans +="I hate ";
         else ans +="I love ";
         
         if(i==n) ans+="it";
         else ans+="that ";
     }
     cout<<ans;
 
}