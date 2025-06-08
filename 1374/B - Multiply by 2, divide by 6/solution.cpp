#include<bits/stdc++.h>
using namespace std;
 
#define ll long long int
int main(){
    int t; cin>>t;
    
    while(t--){
        ll n; cin>>n;
    
    ll moves=0;
    bool check = true;
    
    while(n!=1){
        if(n%6==0){
            n = n/6;
            moves++;
        } else if(n%3==0) {
            n = n*2;
            moves++;
        }
         else { // infinite loop se bachne ke liye
            check = false; 
            break;
        }
        
    }
    
    if(check) cout<<moves<<endl;
    else cout<<-1<<endl;
    }
    
}