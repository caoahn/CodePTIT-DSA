#include<bits/stdc++.h> 
using namespace std ; 
int n ; 
int a[100] ; 
int u[100] ; 
void Try(int i) { 
    for(int j=n ; j >= 1; j--) { 
          if(!u[j]) { 
             a[i] = j ; 
             u[j] = 1 ; 
             if(i == 1) { 
                  for(int k=n ; k>=1 ;k--) { 
                     cout << a[k] ; 
                  } 
                  cout <<" " ; 
             } 
             else Try(i-1) ;  
             u[j] = 0 ; 
          }
    }
} 
int main()  { 
      int t ;
      cin >> t; 
      while(t--) { 
          cin >> n ; 
      Try(n) ; 
      cout << endl ;    
      } 
}