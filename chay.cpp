#include<bits/stdc++.h> 
using namespace std ; 
int a[1005] ; 
int main() { 
      int n ; 
      cin >> n ; 
      for(int i=0; i < n ; i++) { 
          cin >> a[i] ; 
      } 
      sort(a,a+n) ;   
      long long p1 = 1 ;
      long long p2 = 1 ; 
      long long p3 = 1; 
      long long p4 = 1 ; 
      p1 =  a[0]* a[1] ; 
      p2 = a[n-1]*a[n-2]  ; 
      p3 = 1ll*a[0]*a[1]*a[n-1]  ; 
      p4 = 1ll*a[n-1]*a[n-2]*a[n-3] ; 
      long long m = max(p1,p2) ; 
      long long m1 = max(p3,p4) ; 
      cout << max(m,m1) << endl ;  
}