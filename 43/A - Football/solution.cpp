#include <bits/stdc++.h>
using namespace std;
 
int main() {
	// your code goes here
	int n; cin>>n;
    unordered_map<string,int> count;
    int maxcount=0;
	while(n--){
    	string s;
    	cin>>s;
    	
    	count[s]++;
    	maxcount = max(maxcount, count[s]);
    	
	}
	int maxm=0;
	string ans;
	for(auto it=count.begin(); it!=count.end(); it++){
	   //   if(it->second > (it+1)->second){
	   //       cout<<it->first;
	   //   }else cout<<(it+1)->first;
	      if(maxm < it->second){
	          maxm = it->second;
	           ans = it->first;
	      }
	}
	cout<<ans;
	
 
	
	
 
}