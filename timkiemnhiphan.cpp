#include<bits/stdc++.h> 
using namespace std ;    
int res ; 
bool search(int a[],int n,int k) { 
      int l=0; 
      int r=n-1 ; 
      while( l<= r) {  
           int m = (l+r)/2 ; 
           if(a[m] == k) 
           { 
              res = m ; 
              return true ; 
           } 
           if(a[m] < k) { 
                
                l = m+1 ; 
           } 
           else r = m-1 ; 
      } 
      return false  ; 
}
int main() { 
      int t ;
      cin >> t; 
      while(t--) { 
          int n, k ;
          cin >> n >> k ; 
          int a[n] ;
          for(int i=0; i < n ; i++) { 
             cin >> a[i] ; 
          } 
          sort(a,a+n) ; 
          if(search(a,n,k)) cout << res+1 << endl ; 
          else cout <<"NO" << endl ;
      }
}