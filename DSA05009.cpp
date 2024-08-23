#include<bits/stdc++.h> 
using namespace std ; 
int a[1000],n,s ; 
bool ok ; 
void Try(int pos,int sum) { 
      if(ok) return ; 
      for(int j=pos ; j<= n ; j++) { 
         if(sum + a[j] <= s/2) { 
              if(sum + a[j] == s/2) { 
                  ok=true ; 
                  return ; 
              } 
              else Try(j+1,sum + a[j]) ; 
         }
      }
}
int main() { 
      int t ; 
      cin >> t; 
      while(t--) { 
          cin >> n; 
         s = 0 ; 
         ok = false ; 
          for(int i=1;i<=n;i++) { 
             cin >> a[i] ; 
             s += a[i] ;  
          } 
          if(s % 2 != 0) { 
             cout <<"No" << endl ; 
          } 
          else { 
              Try(1,0) ; 
              if(ok) cout <<"Yes" << endl ;
              else cout <<"No" << endl ; 
          }
      }
}