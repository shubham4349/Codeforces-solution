#include<bits/stdc++.h>
using namespace std;
 
int main(){
    
    int n, m, a, b;
    cin>>n>>m>>a>>b;
    
    int cost1 = n*a; // completing ride using only a rubles
    
    // ceil(2.5) = 3, ceil(2)=2
    int cost2;     // ceil(n/m)*b : using only special ride case using b rubles
    
    cost2 = (n%m==0 ? (n/m) *b : ((n/m)+1) *b ); // agar even h to n/m hi rhne do, else ...ceil kro
    
    int cost3=  (n/m * b + n%m *a);    // mix of both 
    
    cout<<min({cost1, cost2, cost3})<<endl;
}