#include<bits/stdc++.h>
using namespace std;
#define pb push_back
int main(){
    
    string s;
    cin>>s;
    
    // split the string by +
    vector<int> nums;
    for(int i =0; i<s.length(); i++){
        if(s[i]!='+'){
            nums.pb(s[i]-'0');
        }
    }
    sort(nums.begin(), nums.end());
    
    for(int i =0; i<nums.size(); i++){
        
        cout<<nums[i];
        if(i== nums.size()-1){
            break;
        }
        cout<<"+";
    }
    
    
    
   
    
    
}