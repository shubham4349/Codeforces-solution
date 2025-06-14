#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main() {
	
  // agar str[0]!=str[n-1] 
         // i++ , j--
         int t; cin>>t;
         
         while(t--){
               int n; cin>>n;
             string s;
             cin>>s;
            
         int x=s.length();
         int i=0;
         int j = x-1;
         
         while(i<j and s[i]!=s[j]){
                 i++;
                 j--;
         }
        //  int ans = (i<j ? j-i+1 : 0);
        int ans= j-i+1;
         
	     cout<<ans<<endl;
 
         }
}