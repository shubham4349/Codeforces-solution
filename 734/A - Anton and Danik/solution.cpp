// #define ll long long int
#include<bits/stdc++.h>
using namespace std;
 
int main(){
   
   int n;cin>>n;
   
   string s; cin>>s;
   
   int countA=0;
   int countD=0;
   
   for(char ch: s){
       if(ch=='A') countA++;
       else countD++;
   }
   if(countA>countD) cout<<"Anton";
   else if(countA<countD) cout<<"Danik";
   else cout<<"Friendship";
   
   
}