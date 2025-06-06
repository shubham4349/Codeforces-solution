#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n,m,a, b;
    cin>> n>>m>>a>> b;
 
    int div= n/m;
    int mod= n%m;
 
    int cost_by_mix = div*b + min(mod*a, b);  //best way to handle leftovers
    // pehle to div*b count kro, fir last bache ke liye dekhlo whch will be optimal, a or b???
    int cost_all_singles =n*a;
 
    cout << min(cost_by_mix, cost_all_singles);
}