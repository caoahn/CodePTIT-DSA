#include<bits/stdc++.h> 
using namespace std ;
int main() { 
      int t;
      cin >> t; 
      while(t--) { 
          int n ; 
          cin >> n ; 
          int d4 = 0 ; 
          int d7 = 0 ; 
          int res4 = 1e9 ;
          int res7 = 1e9 ; 
          for(int i=n ; i>=0 ; i--) { 
              if(n >= 4*i && (n-4*i)%7 == 0) { 
                     d4 = i ; 
                     d7 = (n - 4*i)/7 ;  
                     if(res4 + res7 > d4 + d7) { 
                           res4 = d4 ; 
                           res7 = d7 ; 
                     } 
                     else if(res4 + res7 == d4 + d7) { 
                            if(res4 > d4) { 
                                   res4 = d4 ; 
                                   res7 = d7 ; 
                            }
                     }
              }
          } 
          if(4*res4 + 7*res7 == n) { 
              for(int i=0; i < res4 ; i++) { 
                   cout <<"4" ; 
              } 
              for(int i=0; i < res7 ; i++) { 
                  cout <<"7" ; 
              }  
          }  
          else { 
              cout <<"-1" ; 
          } 
          cout << endl ; 
      }
}