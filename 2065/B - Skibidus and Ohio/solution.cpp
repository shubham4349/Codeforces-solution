#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int t; cin>>t;
    while(t--){
        int cnt=0;
        string s; cin>>s;
        for(int i=0; i<s.length()-1; i++) {
            if(s[i]==s[i+1]) cnt++;
        }
        if(cnt) cout<<1<<endl;
        else cout<<s.length()<<endl;
        
    }
}