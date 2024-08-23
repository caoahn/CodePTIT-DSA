#include<bits/stdc++.h> 
using namespace std ; 
int n,k,a[1000],x[1000],ok=1 ; 
void ktao() { 
     for(int i=1 ; i<= k ; i++ ) { 
          x[i] = i ; 
     }
} 
void sinh() { 
     int i=k ; 
     while(i >= 1 && x[i] == n-k+i) { 
          --i ; 
     } 
     if(i == 0) { 
        ok = 0 ; 
     } 
     else { 
         ++x[i] ; 
         for(int j=i+1 ; j <= n-k+i ; j++) { 
             a[j] = a[j-1]+1 ; 
         }
     }
} 
bool check() { 
     for(int i=1 ; i<= k-1 ; i++) { 
         if(a[x[i]] >= a[x[i+1]]) {
             return false ;
         }
     } 
     return true ;
}
int main() { 
      cin >> n >> k ; 
      for(int i=1; i <= n ; i++) { 
         cin >> a[i] ; 
      } 
      ktao() ; 
      int cnt = 0 ;
      while(ok) { 
         if(check()) { 
             ++cnt ; 
             sinh() ; 
         }
      }
      cout << cnt << endl ; 
}