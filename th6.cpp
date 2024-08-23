#include<bits/stdc++.h>
using namespace std ; 
long long f[93] ; 
long long l[93]; 
int main() {  
     f[0] = 0; 
     f[1] = 1 ; 
     for(int i=2 ; i<= 45 ; i++) { 
          f[i] = f[i-1] + f[i-2] ; 
     }

      l[0] = 1; 
      l[1] = 1 ; 
     for(int i=2 ; i<= 45 ; i++) { 
        l[i] = l[i-1] + l[i-2] ; 
     }
     int t ;
     cin >> t; 
     while(t--) {  
         int n,k ; 
          cin >> n >> k ;  
          long long res = 0 ; 

          while(k > 0 && n > 0) { 
              if(k == l[n]) { 
                  res += f[n] ; 
                  break; 
              } 
              if(k >= l[n-1]) { 
                  res += f[n-1] ; 
                  k -= l[n-1] ; 
                  n = n - 2  ;  
              } 
              else { 
                  n = n-1 ; 
              }
          } 
          cout << res << endl ; 
     } 
     return 0 ; 
}
