#include<bits/stdc++.h> 
using namespace std ; 
int main() { 
     int t ;
     cin >> t ;
     while(t--) { 
          long long n ; 
          cin >> n ; 
          long long a[n] ; 
          long long b[n-1] ;  
          for(long long i=0;i<n;i++) cin >> a[i] ; 
          for(long long i=0;i<n-1 ; i++) cin >> b[i] ; 
          
          for(long long i = 0; i < n-1 ; i++) { 
              if(b[i] != a[i]) {  
                 cout << i+1 << endl ; 
                 break ; 
              }
          }
     } 
     return 0 ; 
}