#include<bits/stdc++.h> 
using namespace std ; 
long long check(int n) { 
      if(n == 0) return 1 ; 
      if(n == 1) return 2 ; 
      long long p = check(n/2) ; 
      if(n % 2) return 2*p*p ; 
      return p*p ; 
}
int main() { 
      int t ; 
      cin >> t; 
      while(t--) { 
           int n ; 
           long long k ; 
           cin >> n >> k ; 
           long long tt = check(n) / 2 ;  
           while(1) { 
              if(n == 1) { 
                  cout << 1 << endl ; 
                  break ; 
              } 
              if (tt == k) { 
                 cout << n << endl; 
                 break ; 
              } 
              if(k > tt) { 
                  k = tt - (k-tt) ; 
              } 
              n-- ; 
              tt /= 2 ; 
           }  
      } 
      return 0 ; 
}