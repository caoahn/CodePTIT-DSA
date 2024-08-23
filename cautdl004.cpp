#include<bits/stdc++.h> 
using namespace std ; 
int n,k,x[1005],a[1005],ok = 1 ; 
map<int,int> mp ; 
void sinh() { 
     int i=k ; 
     while(i >= 1 && a[i] == n-k+i) { 
          --i ; 
     } 
     if(i == 0) { 
         ok=0; 
     } 
     else { 
         ++a[i] ; 
         for(int j=i+1 ; j<= k;j++) { 
              a[j] = a[j-1] + 1 ; 
         }
     }
} 
bool check() { 
      for(int i=1 ; i<= k-1 ; i++) { 
           if(mp[a[i]] >= mp[a[i+1]])  { 
                return false ; 
           }
      } 
      return true ; 
}
int main() { 
      cin >> n >> k ;  
      for(int i=1; i <= n ; i++) { 
           cin >> x[i] ; 
      } 
      for(int i=1 ; i <= n ; i++) { 
            a[i] = i ; 
      }  
      mp[0] = 0 ; 
      for(int i=1 ; i<= n ; i++ ) { 
            mp[a[i]] = x[i] ; 
      }
      int cnt = 0 ; 
      while(ok) { 
           if(check()) { 
                ++cnt ; 
           } 
           sinh() ; 
      } 
      cout << cnt << endl ; 
}