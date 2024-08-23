#include<bits/stdc++.h> 
using namespace std; 
int n,a[1005],b[1005] ,t,ok ;  
void ktao() { 
      for(int i=1 ; i<= n ; i++) { 
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
void gray() { 
      b[1] = a[1] ; 
      for(int i=2 ; i<= n ; i++) { 
         if(a[i] == a[i-1]) { 
              b[i] = 0 ; 
         } 
         else b[i] = 1; 
      } 
      for(int i=1; i<= n;i++) { 
         cout <<b[i] ; 
      } 
      cout <<' ' ; 
}
int main() { 
      cin >> t; 
      while(t--) { 
         cin >> n ; 
         ok = 1 ; 
         ktao() ; 
         while(ok) { 
             gray() ; 
             sinh() ; 
        } 
        memset(a,0,sizeof(a)  ) ;
        memset(b,0,sizeof(b)) ; 
      } 
      return 0 ; 
}