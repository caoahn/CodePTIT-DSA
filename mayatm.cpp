#include<bits/stdc++.h> 
using namespace std ;  
int n ; 
long long s ; 
long long a[1001] ; 
long long Min ;   
void Try(int i,int s,long long cnt) { 
      if( s < 0) { 
             return ; 
      } 
      if(s == 0) { 
          Min = min(cnt,Min)  ; 
      } 
      for(int j=i ; j >= 1 ; j--) { 
              if(s >= 0) { 
                  Try(j-1,s - a[j] , cnt + 1 ) ; 
              }
      }
}
int main() { 
       int t ; 
       cin >> t ; 
       while(t--) { 
           cin >> n  >> s ; 
           for(int i=1 ; i <= n ; i++) { 
              cin >> a[i] ; 
           } 
           sort(a+1,a+n+1) ;  
           Min = 1e9+1 ; 
           Try(n,s,0) ; 
           if(Min == 1e9+1) { 
             cout << "-1" << endl ; 
           } 
           else cout << Min << endl ; 
       }
}