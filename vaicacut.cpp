#include<bits/stdc++.h>
using namespace std ; 
int a[11][11] ;  
int a1[100],c1[100],d1[100],d2[100] ; 
int n ; 
int x[100] ={0}  ; 
int sum= 0;
void Try(int i) { 
     for(int j=1 ; j <= n ; j++) { 
         if(a1[j] == 1 && c1[j] == 1 && d1[i-j+n] == 1 && d2[i+j-1] == 1) { 
             x[i] = j ; 
             a1[j] = c1[j] = d1[i-j+n]= d2[i+j-1] = 0 ; 
             if(i == n) { 
                  int ans = 0 ; 
                  for(int k=1 ; k <= n ; k++) { 
                      ans += a[k][x[k]] ; 
                  } 
                sum = max(sum,ans) ; 
             }
             else  Try(i+1) ; 
             a1[j] = c1[j] = d1[i-j+n]= d2[i+j-1] = 1 ; 
         }
     }
}
int main() { 
      int t ;
      cin >> t ;
      while(t--) {  
         for(int i=1 ; i<= 8 ; i++) { 
             for(int j=1; j <= 8; j++) { 
                  cin >> a[i][j] ;    
             }
         }  
         n = 8 ; 
         for(int i=0 ; i< 99 ; i++  ) { 
             a1[i] = c1[i] = d1[i]=d2[i] = 1 ; 
         } 
         sum = 0 ;
         Try(1) ; 
         cout << sum<< endl ; 
      }
      return 0 ; 
}

// 1 2 3 4 5 6 7 8
// 9 10 11 12 13 14 15 16
// 17 18 19 20 21 22 23 24
// 25 26 27 28 29 30 31 32
// 33 34 35 36 37 38 39 40
// 41 42 43 44 45 46 47 48
// 48 50 51 52 53 54 55 56
// 57 58 59 60 61 62 63 64