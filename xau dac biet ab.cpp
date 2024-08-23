#include<bits/stdc++.h> 
using namespace std ; 
int n,k,a[1005],ok = 1  ; 
void sinh() { 
     int i = n ; 
     while(i >= 1 && a[i] == 1) { 
           --i ; 
           a[i] = 0; 
     } 
     if(i == 0) { 
           ok = 0 ; 
     }  
     else { 
         a[i] = 0; 
     }
}   
bool check() {  
     int res = 0 ;  
     int cnt = 0 ; 
      for(int i=1 ; i<=n ; i++) { 
            if(res == 3) { 
              ++cnt ; 
           }
           if(a[i] == 1 && a[i+1] == 1) { 
              res += a[i] ; 
           } 
           else { 
               res = 0 ; 
           }
      } 
      if(cnt == 1) return true ; 
      else return false ; 
}
int main() { 
      cin >> n >> k ; 
      for(int i=1 ; i <= n ; i++) { 
         a[i] =  0; 
      }  
      int sum = 0 ; 
      while(ok) { 
         if(check()) {  
             for(int i=1 ; i<= n ; i++) { 
                  if(a[i] == 1) cout << "A"  ; 
                  else cout <<"B" ; 
             } 
             cout << endl ; 
         } 
         sinh() ; 
      }
}
