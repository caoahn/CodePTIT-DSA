#include<bits/stdc++.h>
using namespace std ; 
int n,a[1005],ok,k ;  
void ktao() { 
     for(int i=1 ;i<= n ; i++) { 
         a[i] = 0 ; 
     }
} 
void sinh() { 
     int i=n ; 
     while(i >= 1 && a[i] == 1) { 
          a[i] = 0 ; 
          --i ; 
     } 
     if(i == 0) { 
         ok = 0 ; 
     } 
     else { 
        a[i] = 1 ; 
     }
} 
int check() {
     int res = 0 ; 
     int cnt = 0 ;  
      for(int i=1 ; i <= n ; i++) { 
          if(a[i] == 1) { 
             res ++ ; 
          } 
          else { 
            res = 0 ; 
          } 
          if(res == k) { 
             ++cnt ; 
          }
          if(res > k) { 
             return 0 ; 
          }
      } 
      if(cnt == 1) return 1 ; 
      else return 0 ; 
}
int main() { 
      cin >> n>>k ; 
      ok = 1 ; 
      ktao() ;  
      vector<string> v ; 
      int sum = 0; 
      string token ="" ; 
      while(ok) { 
         if(check()) {  
             ++sum ; 
             for(int i=1 ; i<= n ; i++) { 
                 if(a[i] == 1) token += "A" ; 
                 else token += "B" ; 
             } 
            v.push_back(token) ; 
            token ="" ; 
         }
         sinh() ; 
      }  
      cout << sum << endl ; 
      sort(v.begin(),v.end()) ; 
      for(auto x : v) { 
         cout << x << endl ; 
      }
}