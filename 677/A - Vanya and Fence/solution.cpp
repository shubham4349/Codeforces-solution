#include <bits/stdc++.h>
using namespace std;
 
int main() {
    
    int n;
    cin>>n; 
    int h; 
    cin>>h;
    
    vector<int> nums(n);
    int width1 = 0;
    int width2=0;
    for(int i=0; i<n; i++){
        cin>>nums[i];
        if(nums[i]<=h) width1++;
        else width2++;
    }
    int ans = (1*width1) + (2*width2);
    cout<<ans;
    
}