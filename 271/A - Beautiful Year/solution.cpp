// just larger beautiful year print kro
 
#include<bits/stdc++.h>
using namespace std;
#define pb push_back
 
bool isBeautiful(int n){
    
    vector<int> nums;
    while(n>0){
        int digit = n%10;
        nums.pb(digit);
        n /=10;
    }
    set<int> s(nums.begin(), nums.end());
    if(s.size()==nums.size()) return true;
    return false;
}
int main(){
    
    int n; cin>>n;
    int start = n+1;
    while(true){
        if(!isBeautiful(start)) start++;
        else {
            cout<<start<<endl;
            break;
        }
    }
    
}