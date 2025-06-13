#include<bits/stdc++.h>
using namespace std;
 
int main(){
    // curr = limak <= bob
    // limak - x = x*3 
    // bob -  x = x*2 
    
    int a,b;
    cin>>a>>b;
    
    int count=0;
    
    while(a<=b){
        a = a*3;
        b = b*2;
        count++;
    }
    cout<<count;
}