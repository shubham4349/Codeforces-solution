#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
   int t; cin>>t;
   // concept:
   // check a odd divisor greater than 1 exist or not
   // only number which doesnt has a odd divisor are powers of 2
   
  while(t--){
        ll n; cin>>n;
//   bool exist = false;
//   for(ll i =2; i<=n; i++){
//       if(i%2==1 and n%i==0){
//             exist = true;
//           break;
//       }
//   }
//   if(exist) cout<<"YES\n";
//   else cout<<"NO\n"; // this doesn't work for larger inputs
        // for power of 2 --> n & n-1 = 0000
        if(n & (n-1)) { // yani n power of 2 nhi h
            cout<<"YES\n";
        }
        else cout<<"NO\n";
    }
  
    return 0;
}