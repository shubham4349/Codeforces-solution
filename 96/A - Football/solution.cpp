#include<bits/stdc++.h>
using namespace std;
 
int main(){
    
    // agar consistent 0 ya 1 >=7 h to dangerous
    
    string s; cin>>s;
    int count=1; // intially 1 se start kro
    bool check = true;
    for(int i =0; i<s.length()-1; i++){
        if(s[i]==s[i+1]){
            count++;
            if(count>=7) {
                check = false;
                cout<<"YES"<<endl;
                break;
            }
            
        } else count=1;
    }
    if(check) cout<<"NO"<<endl;
    
    
}