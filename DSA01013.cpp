#include<bits/stdc++.h> 
using namespace std ;  
void gray2(string s) { 
      string res ="" ; 
      res += s[0] ; 
      for(int i=1 ; i< s.size() ; i++) { 
         if(s[i] == '1') { 
             if(res[i-1] =='0') { 
                 res += "1" ; 
             } 
             else res += "0" ; 
         } 
         else res += res[i-1] ; 
      } 
      cout << res << endl ; 
}
int main() { 
     int t ;
     cin >> t; 
     while(t--) { 
          string s ; 
          cin >> s ; 
          gray2(s) ; 
     } 
     return 0 ; 
}