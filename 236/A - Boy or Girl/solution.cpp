// set me string dal do, 
// set ki size even h to chat with her, else ignore him
 
#include<bits/stdc++.h>
using namespace std;
 
int main(){
    string s; cin>>s;
    
    set<int> temp(s.begin(), s.end());
    
    if(temp.size()%2==0) {
        cout<<"CHAT WITH HER!"<<endl;
    }
    else cout<<"IGNORE HIM!"<<endl;
}