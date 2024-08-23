#include<bits/stdc++.h> 
using namespace std ;
int n , a[1001] ; 
int k ; 
void Try(int i) { 
       for(int j=a[i-1]+1 ; j<= n-k+i ; j++) { 
          a[i] = j  ; 
          if(i == k) { 
             for(int z=1 ; z<= k ; z++) { 
                 cout << a[z]  ; 
             } 
             cout << endl ; 
          } 
          else Try(i+1) ; 
       }
} 
int main() { 
       cin >> n >> k; 
       Try(1)  ; 
}