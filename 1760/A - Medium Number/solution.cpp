#include<bits/stdc++.h>
using namespace std;
 
int main(){
    
    int t; cin>>t;
    while(t--){
        int a,b,c;
    cin>>a>>b>>c;
    
    // case:1 -> when A is medium
    if(a>b and a<c or a>c and a<b) cout<<a<<endl;
    // case:2-> when B is medium
    else if(b>a and b<c or b>c and b<a) cout<<b<<endl;
    // case:3-> when C is med
    else cout<<c<<endl;
    }
    
}