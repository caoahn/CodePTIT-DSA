#include<bits/stdc++.h> 
using namespace std ; 
int n,k,a[1005],ok = 1  ; 
void sinh() { 
     int i = n ; 
     while(i >= 1 && a[i] == 1) { 
         a[i] = 0; 
         --i ; 
     } 
     if(i == 0) { 
           ok = 0 ; 
     }  
     else { 
         a[i] = 1; 
     }
}   
bool check() {  
     int res = 0 ;  
     int cnt = 0 ; 
      for(int i=1 ; i<=n; i++) { 
         if(res == k) { 
             ++cnt ; 
         }  
         if(a[i] == a[i+1] && a[i] == 1 && a[i+1] == 1) { 
              res =res + ( a[i] + a[i+1] ) ; 
         } 
         else res = 0 ; 
      } 
      if(cnt == 1) return true ; 
      else return false ; 
}
int main() { 
      cin >> n >> k ; 
       kta
      while(ok) { 
          for(int i=1 ; i<= n ; i++) { 
            cout << a[i] ; 
		  } 
		  cout << endl ; 
         } 
         sinh() ; 
}
