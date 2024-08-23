#include<bits/stdc++.h> 
using namespace std ;
int n ;  
int d1[1001] ; 
int d2[1001] ; 
int c1[1001] ; 
int x[100] ; 
int cnt  ; 
void Try(int i) { 
      for(int j=1 ; j<= n ; j++) { 
          if(c1[j] == 1 && d1[i-j+n] == 1 && d2[i+j-1] == 1) { 
               x[i] = j ; 
               c1[j] = d1[i-j+n] = d2[i+j-1] = 0 ; 
               if(i == n) { 
                      ++cnt ; 
               } 
               else { 
                 Try(i+1) ; 
               }
                c1[j] = d1[i-j+n] = d2[i+j-1] = 1; 
          }
      }
}
int main() { 
      int t ; 
      cin >> t; 
      while(t--) { 
         cin >> n ; 
         for(int i=0 ; i< 999 ; i++) { 
             d1[i] = c1[i] = d2[i] = 1;  
         }   
         cnt = 0 ; 
         Try(1) ; 
         cout << cnt << endl ; 
      }
}