// agar input string me HQ9+ nhi h to, print NO
#include<bits/stdc++.h>
using namespace std;
 
int main(){
    
    string s;
    cin>>s;
   
    for(int i=0; i<s.length(); i++){
        if(s[i]=='H' or s[i]=='Q' or s[i]=='9' ) {
            cout<<"YES"<<endl;
            return 0;
        }
    }
    cout<<"NO"<<endl;
        return 0;
}