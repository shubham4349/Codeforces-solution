#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define in insert
 
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,c;
        cin>>a>>b>>c;
        
        vector<int> temp;
        temp.pb(a);
        temp.pb(b);
        temp.pb(c);
        sort(temp.begin(), temp.end());
        cout<<temp[1]<<endl;
        // set<int> temp;
        // set.in(a);
        // set.in(b);
        // set.in(c);
        
    }
    
}