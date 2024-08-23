#include<bits/stdc++.h>
using namespace std ; 
long long f[93] ; 
long long n, k ;  
void solve() { 
     while(n > 2) { 
          if(k <= f[n-2]) { 
               n -= 2 ; 
          } 
          else { 
              k -= f[n-2]  ;  
              n -= 1 ; 
          }
     } 
     if(n == 1) cout <<"0" << endl ; 
     else cout <<"1" << endl ; 
}
int main() { 
    f[1] = 1; 
    f[2] = 1;  
          for(int i=3 ; i <= 92 ; i++) { 
               f[i] = f[i-2] + f[i-1] ; 
          }  
      int t ; 
      cin >> t; 
      while(t--) { 
          cin >> n >> k ;  
          solve() ; 
      } 
      return 0 ; 
}