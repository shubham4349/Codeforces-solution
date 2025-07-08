#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int t; cin>>t;
   
    while(t--){
          int ans=0;
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        
        if(b>a) ans++;
        if(c>a) ans++;
        if(d>a) ans++;
       cout<<ans<<endl;
    }
     
}