#include<bits/stdc++.h>
using namespace std ; 
int n,k ; 
int a[1001] ; 
map<int,int> mp ; 
bool check() { 
     for(int i=1 ; i < k  ; i++) { 
         if(a[i] > a[i+1]) { 
             return false ; 
         }
     } 
     return true ; 
}
void Try(int i) { 
     for(int j=a[i-1]+1 ; j<= n-k+i ; j++) { 
          a[i] = j ; 
          if(i == k) {  
             if(check()) { 
                   for(int z=1;  z <= k ; z++) { 
                 cout << mp[a[z]] <<" " ; 
              } 
              cout << endl ; 
             }
          } 
          else Try(i+1) ; 
     }
}
int main() { 
     int t ;
     cin >> t; 
     while(t--) { 
          cin >> n >> k ;  
          mp[0] = 0 ; 
          for(int i=1 ; i<= n ; i++)  { 
                cin >> a[i] ; 
          }   
          sort(a+1,a+n+1) ; 
          for(int i=1 ; i<=n ; i++) { 
              mp[i] = a[i] ; 
          }
          Try(1) ; 
     }
}