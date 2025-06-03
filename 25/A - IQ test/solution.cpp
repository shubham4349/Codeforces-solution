#include<bits/stdc++.h>
using namespace std;
#define pb push_back
int main(){
    int n;
    cin>>n;
    vector<int> nums(n);
    for(int i =0; i<n; i++) cin>>nums[i];
    
    unordered_map<int,int> even_map;
    unordered_map<int,int> odd_map;
    
    vector<int> even;
    vector<int> odd;
    
    for(int i=0; i<n; i++){
        if(nums[i]%2==0){
            even_map.insert({nums[i], i+1});
            even.pb(nums[i]);
        }else{
            // count[odd]++;
            odd_map.insert({nums[i], i+1});
            odd.pb(nums[i]);
        }
    } 
    if(odd.size()<even.size()){ // ans odd me h
        int ans= odd[0];
        cout<<odd_map[ans];
    }
    else{
        int ans1= even[0]; // ans even me h
        cout<<even_map[ans1];
    }
    
}  
    
    
    