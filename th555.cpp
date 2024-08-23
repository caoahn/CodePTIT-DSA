#include<bits/stdc++.h>
using namespace std ; 
int main() { 
     int t ;
     cin >> t; 
     while(t-- ) { 
          int n,k;
          cin >> n >> k ;
          long long a[n] ; 
          for(int i=0;i<n;i++) { 
             cin >> a[i] ; 
          } 
         long long Max=-1e9-1 ; 
         for(int i=0; i < n-k+1 ; i++) { 
             for(int j=i ; j < i+k ; j++) { 
                  Max = max(a[j],Max) ; 
             } 
             cout << Max <<' ' ; 
         } 
         cout << endl ; 
     }
}