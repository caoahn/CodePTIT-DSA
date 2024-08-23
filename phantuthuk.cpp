#include<bits/stdc++.h> 
using namespace std ; 
int main()  { 
      int t ;
      cin >> t ;
      while(t--) { 
          int m,n,k ; 
          cin >> m >> n >> k ; 
          int a[m] ; 
          int b[n] ; 
          for(int i=0; i < m ; i++) cin >> a[i] ; 
          for(int i=0; i < n ;i++) cin >> b[i] ; 
          sort(a,a+m) ; 
          sort(b,b+n) ; 
          int i=0,j=0 ; 
          int cnt = 0 ; 
          int p[m+n] ; 
          while(i < m && j < n) { 
              if(a[i] <= b[j]) { 
                 p[cnt] = a[i] ; 
                 ++cnt  ; 
                 ++i ; 
              } 
              else { 
                 p[cnt] = b[j]  ; 
                 ++cnt ; 
                 ++j ; 
              }
          } 
          while(i < m) { 
              p[cnt++] = a[i] ; 
              ++i ; 
          } 
          while(j < n ) { 
             p[cnt++] = b[j]  ; 
             ++j ; 
          } 
          for(int i=0; i < m+n ; i++) { 
              if(i == k-1) { 
                 cout << p[i] << endl ; 
              }
          }
      } 
      return 0 ; 
} 
