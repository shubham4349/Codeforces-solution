#include <bits/stdc++.h>
using namespace std;
 
int main() {
	// your code goes here
	int t;cin>>t;
	while(t--){
	    int n;
	cin>>n;
	vector<int> nums(n);
	for(int i=0; i<n; i++) cin>>nums[i];
	
	int blank=0;
	int maxblank=0;
	for(int i=0; i<n; i++){
	    // int j=0;
	     if(nums[i]==0){
	         blank++;
	         maxblank = max(maxblank, blank);
	        // i++;
	     }
	      else blank=0;
	     
	}
	cout<<maxblank<<endl;
	
	
	}
    
 
}