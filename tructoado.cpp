#include<bits/stdc++.h> 
using namespace std ;  
struct toado { 
      int a,b ; 
}; 
bool cmp(toado x,toado y) { 
     if(x.b > y.b) return false ; 
     return true ; 
}
int main() { 
     int t ;
     cin >> t;
     while(t--) { 
          int n ; 
          cin >> n ;  
          struct toado cv[n] ; 
          for(int i=0; i < n ; i++)  { 
               cin >> cv[i].a ; 
               cin >> cv[i].b ; 
          }
          sort(cv,cv+n,cmp) ; 
          int cnt = 1; 
          int ans = cv[0].b ; 
          for(int i=1 ; i<n ; i++) {    
              if(cv[i].a >=  ans) {  
                  ++cnt ; 
                  ans = cv[i].b ; 
              }
          }
          cout << cnt << endl ; 
     }
}