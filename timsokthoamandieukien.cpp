#include<bits/stdc++.h> 
using namespace std ; 
int check(string s) {  
    int p[101]  = {0}; 
    for(int i=0 ; i < s.size() ; i++) { 
          if(s[i] - '0' > 5) return 0 ;  
          p[s[i]]++ ; 
    } 
    for(int i=0; i < 100 ; i++) { 
          if(p[i] > 1) return 0 ; 
    } 
    return 1 ;
} 
int main() { 
      int t ; 
      cin >> t; 
      while(t--) { 
          int l, r ; 
          cin >> l >> r ; 
          int cnt = 0 ; 
          for(int i=l ; i <= r ; i++) { 
              if(check(to_string(i)) ) { 
                  ++cnt ; 
              }
          } 
          cout << cnt  <<endl ; 
      }
} 
