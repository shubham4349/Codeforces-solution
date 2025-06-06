#include<bits/stdc++.h>
using namespace std;
 
int main(){
   int num=0;
   int n; cin>>n;
   
   while(n--){
      string s; cin>>s;
       
      if(s=="X++") num++;
      else if(s=="++X") ++num;
      else if(s=="X--") num--;
      else --num;
   }
   cout<<num;
}