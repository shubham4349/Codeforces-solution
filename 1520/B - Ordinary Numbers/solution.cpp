#include<bits/stdc++.h>
using namespace std;
#define ll long long int
 
// bool isOrdinary(int x){
//     if(x<10) return true;
    
//     vector<int> numarray;
    
//     while(x>0){
//         int digit = x%10;
//         numarray.push_back(digit);
//         x = x/10;
//     }
//     int first_num = numarray[0]; // 121 -> iska sum bhi 111 ke equal aayega tere karan
//     int tobe_sum = first_num * numarray.size();
//     int actual_sum = accumulate(numarray.begin(), numarray.end(),0);
    
//     if(actual_sum==tobe_sum) return true;
//     else return false;
// }
int main(){
    int t; cin>>t;
    while(t--){
     ll n; cin>>n;
    
    int count=0;
    // for(int i=1; i<=n; i++){
    //     if(isOrdinary(i)) count++;
    // }
    // cout<<count;
    
    // CORRECT APPROACH:
    // 1e9 tak me total 81 ordinary numbers hi h
    // so lets generate them
    
    for(int i =1; i<=9; i++){ // 1 , 2 , 3
        ll num=i;
        
        while(num<=n){
            count++; // pehle count isliye likha taki i(single digit) include hoye
            num = num*10+ i; // 111, 22, 4444...
        }
    }
    cout<<count<<endl;
    
       
    }
}