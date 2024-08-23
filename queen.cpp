#include<bits/stdc++.h> 
using namespace std ;  
int a[11][11] ; 
int c1[100] = {0} ; 
int d1[100] = {0} ; 
int d2[100] = {0} ;  
int x[100]  ; 
int n ; 
int sum ; 
int Max = -1e9 - 1; 
void Try(int i) {  
       for(int j=1 ; j <= n ; j++) { 
           if(c1[j]  && d1[i-j+n] && d2[i+j-1]) { 
             x[i] = j ; 
             c1[j] = d1[i-j+n] = d2[i+j-1] = 0 ; 
             if(i == n) {  
                   for(int k=1 ; k <= n ; k++) {  
                      sum += a[k][x[k]] ;   
                   } 
                  Max = max(Max,sum) ; 
                  sum = 0 ;
             } 
             else Try(i+1) ; 
             c1[j] = d1[i-j+n] = d2[i+j-1] = 1 ; 
           }
       }
}
int main() { 
      int t ; 
      cin >> t; 
      while(t--) { 
           for(int i=1 ; i<= 8 ; i++) { 
             for(int j=1 ; j<= 8 ; j++) { 
                 cin >> a[i][j] ; 
             }
           } 
           n = 8 ; 
           sum = 0 ;   
           for(int i=0; i < 100 ; i++) { 
               c1[i] = d1[i] = d2[i] = 1; 
           } 
           Try(1) ; 
           cout <<Max<< endl ; 
      }
}