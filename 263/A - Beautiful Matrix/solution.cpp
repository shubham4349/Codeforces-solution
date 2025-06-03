#include<bits/stdc++.h>
using namespace std;
 
int main(){
    
    vector<vector<int>> mat(5,vector<int>(5));
    
    for(int i =0; i<5; i++){
        for(int j=0; j<5; j++){
            cin>>mat[i][j];
        }
    }
    int a,b;
    for(int i =0; i<5; i++){
        for(int j=0; j<5; j++){
            if(mat[i][j]==1){
                a = i+1;  // 1 ki row index // 2
                b = j+1;  // 1 ki col index // 5
            }
        }
    }
    int row_moves= abs(a-3); 
    int col_moves= abs(b-3);
    cout<<row_moves + col_moves;
    
}