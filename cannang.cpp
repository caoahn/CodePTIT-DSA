#include<bits/stdc++.h> 
using namespace std ; 
int d ; 
int b[14] = {0,1,1,1,2,2,2,3,3,3,4,4,4,0} ; 
void tt() { 
     int x = 11 , y = 12  ; 
     while(x > 0 && b[x] >= b[x+1]) { 
          --x ; 
     }
     if(!x) { 
          d=1 ; 
          return ; 
     } 
      while(y > 0 && b[x] >= b[y]) { 
          --y ; 
      } 
      if(!y) { 
          d=1 ; 
          return ;  
      } 
      swap(b[x],b[y]) ; 
      int l=x+1 ; 
      int r=12 ; 
      while(l < r) { 
          swap(b[l++],b[r--]) ; 
      }
} 
int main() { 
      int t = 1 ; 
      while(t--) { 
          int a[14] ; 
          for(int i=1 ; i<= 12 ;++i) { 
              cin >> a[i] ; 
          } 
          int k = 2e9 ; 
          while(!d) { 
               int t1 = 0,t2 = 0 , t3 =0, t4 = 0 ;
               for(int i=1 ; i<= 12 ; i++) { 
                  if(b[i] == 1) t1 += a[i] ;  
                  else if(b[i] == 2) t2 += a[i] ; 
                  else if(b[i] == 3) t3 += a[i] ; 
                  else t4 += a[i] ; 
               } 
               k = min(max({t1,t2,t3,t4})- min({t1,t2,t3,t4}) ,k ); 
               tt() ;  
          } 
          cout << k ; 
       }
}