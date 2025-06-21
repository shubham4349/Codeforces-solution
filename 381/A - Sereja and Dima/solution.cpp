#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n; cin>>n;
    vector<int> nums(n);
    
    for(int i=0; i<n; i++) cin>>nums[i];
    
    int serejaSum=0;
    int dimaSum=0;
    int l=0;
    int r=n-1;
    
    int turn=0;
    while(l<=r){
        
       if(turn%2==0){
            if(nums[l]>nums[r]){
            serejaSum+=nums[l];
            l++;
            }
            else {
                serejaSum+=nums[r];
                r--;
            }
       }else{
           if(nums[l]>nums[r]){
            dimaSum+=nums[l];
            l++;
            }
            else {
                dimaSum+=nums[r];
                r--;
            }
       }
       turn++;
        
    }
    cout<<serejaSum<<" "<<dimaSum;
}