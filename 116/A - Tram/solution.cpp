#include <bits/stdc++.h>
using namespace std;
 
int main() {
	int t;
	cin>>t;
	int currCap=0; // currrent capacity
	int maxCap=0;
	while(t--){
	    int a,b;
	    cin>>a>>b; // a-exit, b-entry
	    currCap += b-a;
	    maxCap = max(maxCap, currCap);
	}
    cout<<maxCap;
}