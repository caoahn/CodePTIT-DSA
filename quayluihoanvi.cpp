#include<bits/stdc++.h> 
using namespace std ;
int n , a[1001] ; 
int u[100] ; 
void Try(int i) { 
      for(int j=1 ; j<= n ; j++) { 
           if(!u[j]) { 
              a[i] = j ; 
              u[j] = 1 ; 
              if(i == n) { 
                 for(int k=1 ; k<= n ; k++) { 
                   cout << a[k] ; 
                 } 
                 cout << endl ; 
              } 
              else Try(i+1) ; 
              u[j] = 0 ;
           }
      }
} 
int main() { 
       cin >> n ; 
       Try(1)  ; 
}