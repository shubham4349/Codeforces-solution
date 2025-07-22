#include<bits/stdc++.h>
using namespace std;
 
int main(){
     
     int n;
     cin>>n;
     while(n--){
         vector<vector<char>> mat(8,vector<char>(8));
     for(int i=0; i<=7; i++){
         for(int j=0; j<=7; j++){
             cin>>mat[i][j];
         }
     }
     string s="";
     for(int i=0; i<=7; i++){
         for(int j=0; j<=7; j++){
             char ch= mat[i][j];
             if(ch!='.') s+=ch;
         }
     }
     cout<<s<<endl;
     }
     
     
}