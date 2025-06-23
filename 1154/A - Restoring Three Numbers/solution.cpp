#define ll long long int
#include<bits/stdc++.h>
using namespace std;
 
int main(){
   
//   a+b  - x
//   a+c  - y
//   b+c  - z
//   a+b+c--> maxm value (M)
   
//   ans-> 
//   cout<< M-x = a+b+c - a-b = c ..similarly do for a and b , since answer kisi bhi order me print kr sakte ho 
 
//   int x,y,z,d;
//   cin>>x>>y>>z>>d;
   
//   M = max({x,y,z,d}); -> pata nhi na ki kon x kon y 
 
     vector<int> nums(4);
     
     for(int i=0; i<4; i++){
         cin>>nums[i];
     }
     sort(nums.begin(), nums.end());
     
     cout<<nums[3]-nums[0]<<" "<<nums[3]-nums[1]<<" "<<nums[3]-nums[2];
   
   
   
}