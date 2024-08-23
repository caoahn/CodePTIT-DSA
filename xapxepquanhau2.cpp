#include<bits/stdc++.h>
using namespace std ; 
int n; 
int x[100] ; 
int a[11][11] ; 
int c1[100],d1[100],d2[100] ;  
int sum ; 
void Try(int i) {  
     for(int j=1 ; j<= n ; j++) { 
         if(c1[j] == 1 && d1[i-j+n] == 1 && d2[i+j-1] == 1) { 
              x[i] = j ; 
              c1[j] = d1[i-j+n] = d2[i+j-1] = 0 ; 
              if(i == n) { 
                 int ans = 0 ; 
                 for(int k=1 ; k<= n ; k++) { 
                     ans += a[k][x[k]] ; 
                 } 
                 sum = max(sum,ans) ; 
              } 
              else Try(i+1) ; 
              c1[j] = d1[i-j+n] = d2[i+j-1] = 1 ; 
         }
     }
}
int main() { 
     int t ;
     cin >> t ;
     while(t--) { 
          for(int i=1 ; i<= 8 ; i++) { 
             for(int j=1; j<=8 ; j++) { 
                  cin >> a[i][j] ; 
             }
          } 
          n = 8 ; 
          for(int i=0;i<100 ; i++) { 
              c1[i] = d1[i] = d2[i] = 1 ; 
          } 
          sum = 0 ; 
          Try(1) ; 
          cout << sum << endl ; 
     }
}