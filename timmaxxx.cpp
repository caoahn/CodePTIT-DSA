#include<bits/stdc++.h> 
using namespace std ; 
int main() { 
      int t ;
      cin >> t; 
      while(t--) { 
          int n ; 
          cin >> n ; 
          long long a[n] ; 
          for(int i=0; i < n ; i++) { 
              cin >> a[i] ; 
          } 
          sort(a,a+n) ; 
          long long m1 = 0 ;  
          long long ans = 0 ; 
          long long k = 1e9 + 7 ; 
          for(int i=0; i < n ; i++) { 
               ans += a[i]*i ; 
               ans %= k ; 
          } 
           cout << ans << endl ; 
      }
}  