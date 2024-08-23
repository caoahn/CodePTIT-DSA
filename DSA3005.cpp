#include<bits/stdc++.h> 
using namespace std ;
int main() { 
      int t ;
      cin >> t ; 
      while(t--) { 
          int n,k ; 
          cin >> n >> k ; 
          int a[n] ; 
          for(int i=0; i <n ; i++) { 
             cin >> a[i] ; 
          } 
          sort(a,a+n) ; 
          long long s1 = 0 ; 
          long long s2 = 0 ; 
          for(int i=0; i < min(k,n-k) ; i++) { 
              s1 += a[i] ; 
          } 
          for(int i=min(k,n-k);i<n;i++) { 
              s2 += a[i] ; 
          } 
          cout << abs(s1-s2) << endl ; 
      }
}