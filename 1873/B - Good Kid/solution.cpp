#include <bits/stdc++.h>
using namespace std;
 
int main() {
	
     // agar arr me 0 aaya, to usko 1 kro..
     // nhi to min element me +1 kro
     
     int t; cin>>t;
     while(t--){
         int n; cin>>n;
     
     vector<int> arr(n);
     for(int i=0; i<n; i++) cin>>arr[i];
     
     int minm = *min_element(arr.begin(), arr.end());
     int product=1;
     int count=0;
     for(int i=0; i<n; i++){
         if(arr[i]==0 and count==0) {
             arr[i]=1;
             count=1;
         }
         else if(arr[i]==minm and count==0) {
             arr[i]+=1;
             count=1;
         }
         product *= arr[i];
     }
     cout<<product<<endl;
     }
    
    
}
 