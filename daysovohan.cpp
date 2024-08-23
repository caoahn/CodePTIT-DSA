#include<bits/stdc++.h> 
using namespace std ; 
const int du = 1e9+7 ;  
long long solve(long long n) { 
    if(n == 0 && n == 1) { 
          return 1  ; 
    } 
    return solve((n%du-1)%du) + solve((n%du-2)%du) ; 
}
int main() {  
      int t  ; 
      cin >> t; 
      while(t--) {   
          long long n ; 
          cin >> n; 
          cout << solve(n) << endl ; 
      }
}