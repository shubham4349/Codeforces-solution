#include <bits/stdc++.h>
using namespace std;
 
int main() {
	
   int t;
   cin>>t;
   while(t--){
       	vector<vector<char>> mat(10,vector<char>(10));
	for(int i=0; i<10; i++){
	    for(int j=0; j<10; j++ ){
	        cin>>mat[i][j];
	    }
	}
	int score=0;
	for(int i=0; i<10; i++){
	    for(int j=0; j<10; j++ ){
	       
	       if((i==0 or i==9 or j==0 or j==9)and mat[i][j]=='X') score+=1;
	       else if((i==1 or i==8 or j==1 or j==8) and mat[i][j]=='X') score+=2;
	       else if((i==2 or i==7 or j==2 or j==7) and mat[i][j]=='X') score+=3;
	       else if((i==3 or i==6 or j==3 or j==6) and mat[i][j]=='X') score+=4;
	       else if((i==4 or i==5 or j==4 or j==5) and mat[i][j]=='X') score+=5;
	       
	    }
	}
	cout<<score<<endl;
	
   }
 
}