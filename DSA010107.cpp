#include<bits/stdc++.h>
using namespace std ;
int main() { 
      int t; 
      cin >> t; 
      while(t--) { 
         string s ; 
         cin >> s ;
         string tmp ="" ; 
         tmp += s[0] ;   
         for(int i=1 ; i < s.size() ; i++) { 
             if(s[i] != s[i-1]) { 
                 tmp += "1" ; 
             } 
             else { 
                 tmp += "0" ; 
             }
         } 
         cout << tmp << endl ; 
      }
}