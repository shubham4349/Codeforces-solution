#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main() {
	
    int t; cin>>t;
    while(t--){
         ll x, y, n;
     cin>>x>>y>>n;
     
     // k mod x =  y 
     // k = [0,N]
     // find  maxm k
     
    //  for(int k=n; k>=0; k--){
    //      if(k%x == y){
    //          cout<<k<<endl;
    //          break;
    //      }
    //  }
     // MATHS:
       //  k = x * q + y
       // since k<=N
       // x*q+y <=n 
      // q = n-y / x
       
      
       ll quotient = (n-y) / x;
        ll k = x * quotient + y;
        
        cout<<k<<endl;
    }
     
    
}
 