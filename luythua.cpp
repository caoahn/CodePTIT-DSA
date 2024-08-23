#include<bits/stdc++.h> 
using namespace std ; 
const int du = 1e9+7 ;  
long long solve(long long n, long long k) { 
       if(k == 0) return 1  ; 
       if(k == 1) return n ; 
       long long x = solve(n,k/2)  ; 
       if(k % 2 == 0) { 
         return (x%du * x%du) % du ; 
       } 
       else { 
          return (x%du * x%du * n) % du  ;
       }
}
int main() { 
      int t ;
      cin >> t ; 
      while(t--) { 
           long long n,k ; 
           cin >>n >> k ;  
           cout << solve(n,k) << endl ; 
      } 
      return 0 ; 
}