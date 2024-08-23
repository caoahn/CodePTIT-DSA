#include<bits/stdc++.h> 
using namespace std; 
int a[1001] ; 
int u[1001] ; 
int n,ok,k ; 
void in() { 
     for(int i=n; i >= 1 ; i--) { 
         cout << a[i]  ; 
     } 
     cout << endl ; 
} 
void Try(int i) { 
      for(int j=n ; j>=1 ;j--) { 
         if(!u[j]) { 
             a[i] = j ;
             u[j] = 1;   
             if(i == 1) { 
                 in() ; 
             } 
             else Try(i-1) ;  
             u[j] = 0 ; 
         }
      }
}
int main() { 
      cin >> n ;  
      ok = 1; 
      Try(n) ; 
}