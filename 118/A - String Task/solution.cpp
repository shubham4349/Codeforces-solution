#include <bits/stdc++.h>
using namespace std;
 
string deleteVowels(string& s){
      int n= s.length();
      string ans= "";
      for(char c : s){
          char lower= tolower(c);
          if (lower != 'a' && lower != 'e' && lower != 'i' && lower != 'o' && lower != 'u' && lower != 'y'){
              // yani consonats h to unko add krte jao
              char conso = tolower(c);
              ans = ans + '.' + conso;
          }
      }
      return ans;
}
int main() {
    
     // sare vowels deleet kro
     // sare conso ke pehle ek . lagado
     // uppercase conso ko lowercase krdo
     
     // 
     string s;
     cin>>s;
     
     string ans = deleteVowels(s);
     cout<<ans;
 
}