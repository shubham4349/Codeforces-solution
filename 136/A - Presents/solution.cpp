#include <bits/stdc++.h>
using namespace std;
 
int main() {
	int n;
	cin >> n;
	
	vector<int> p(n);
	for(int i = 0; i < n; i++) cin >> p[i];
	
	vector<int> q(n); // q[i] = person who gave gift to person i+1
	
	for(int i = 0; i < n; i++) {
	    q[p[i] - 1] = i + 1;  // person i+1 gave gift to p[i]
	}
	
	for(int i = 0; i < n; i++) {
	    cout << q[i] << " ";
	}
}