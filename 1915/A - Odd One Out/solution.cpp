#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin>>t;
    while(t--){
    int a, b,c;
    cin>>a>>b>>c;
    
    int curr_xor=0;
    curr_xor ^=a;
    curr_xor ^=b;
    curr_xor ^=c;
    
    cout<<curr_xor<<endl;
    }
    
}