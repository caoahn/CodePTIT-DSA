#include<bits/stdc++.h> 
using namespace std ;
int n , a[1001] ; 
void Try(int i) { 
       for(int j=0 ; j<=1 ; j++) { 
          a[i] = j  ; 
          if(i == n) { 
             for(int k=1 ; k<= n ; k++) { 
                 cout << a[k]  ; 
             } 
             cout << endl ; 
          } 
          else Try(i+1) ; 
       }
} 
int main() { 
       cin >> n; 
       Try(1)  ; 
}