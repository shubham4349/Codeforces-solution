#include <bits/stdc++.h>
using namespace std;
 
int main() {
   
   int t;
   cin>>t;
   int ans=0;
   while(t--){
       string s;
       cin>>s;
       if(s[0]=='T') ans+=4;
       else if(s[0]=='C') ans+=6;
       else if(s[0]=='O') ans+=8;
         else if(s[0]=='D') ans+=12;
        else if(s[0]=='I') ans+=20;
       
   }
   cout<<ans;
}