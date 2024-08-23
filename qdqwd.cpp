#include<bits/stdc++.h> 
using namespace std ; 
int main() { 
      int t ;
      cin >> t; 
      while(t--) { 
          int n ; 
          cin >> n ; 
          int a[n] ; 
          for(int i=0; i < n ; i++) { 
              cin >> a[i] ; 
          } 
          sort(a,a+n) ; 
          int m = -1 ; 
          long long k = 1e9 + 7 ; 
          long long ans  = 0 ;  
          long long x  ; 
          for(int i=0; i < n ; i++) { 
               ans += 1ll * a[i] * i ; 
             x = ans % k ;  
              m = max(x,m) ;  
          } 
           cout <<  m << endl ; 
      }
}
