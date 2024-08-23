#include<bits/stdc++.h> 
using namespace std ;  
long long n ;  
long long solve(long long a[],long long b[]) { 
      sort(a,a+n) ; 
      sort(b,b+n,greater<long long> ()) ;  
      long long sum = 0  ; 
      for(int i=0; i < n ; i++) { 
          sum += 1ll*a[i]*b[i] ; 
      } 
      return sum ; 
}
int main() { 
      int t;
      cin >> t ;
      while(t--) { 
          cin >> n ; 
          long long a[n] ; 
          long long b[n] ; 
          for(int i=0; i < n ; i++) cin >> a[i] ; 
          for(int i = 0; i < n; i++) cin >> b[i] ; 
          long long res = 1e8 ; 
          res = min(solve(a,b), solve(b,a)) ;
          cout << res << endl ; 
      } 
      return 0  ; 
}