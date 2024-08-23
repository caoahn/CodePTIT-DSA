#include<bits/stdc++.h> 
using namespace std ;
int main() { 
      int t; 
      cin >> t; 
      while(t--) { 
          int n ; 
          cin >> n ; 
          int a[n] ; 
          for(int i=0; i < n ; i++)  { 
              cin >> a[i] ; 
          } 
          int ok = 0 ; 
          int Max = -1e9-1 ; 
          for(int i=0; i < n ;i++) { 
              if(a[i]  > 0) { 
                 ok = 1;  
              } 
              if(Max < a[i]) Max = a[i] ; 
          } 
          if(ok == 0) { 
             cout << Max << endl ; 
          } 
          else {  
              int sum = 0, res = -1e9-1 ; 
              for(int i=0 ;i < n ; i++) {
                  if(sum + a[i] < 0 ) { 
                      sum = 0 ; 
                      continue ; 
                  } 
                  sum += a[i] ; 
                  if(res < sum) res = sum ; 
              } 
              cout << res << endl ; 
          }    
      }
}