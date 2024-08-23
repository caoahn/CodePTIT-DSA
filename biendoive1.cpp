#include<bits/stdc++.h> 
using namespace std ; 
int n ;  
int sum ; 
int res ;  
void Try(int i,int dem) { 
      if(dem > res) return ; 
      if(i == 1) { 
           res = min(res,dem) ; 
      } 
      if(i % 2 == 0) { 
          Try(i/2,dem+1) ; 
      } 
      if(i % 3 == 0) { 
         Try(i/3,dem+1) ; 
      } 
      Try(i-1,dem+1) ; 
}
int main() { 
     int t ; 
     cin >> t ;
     while(t--) { 
         cin >> n ;
         sum = 0 ; 
        res = 1e9+1 ; 
        Try(n,0) ; 
        cout << res << endl ; 
     }
} 
// 10  5   4  2   1 
// 6 3 1  
//1  2  3 4   
// 1 1 = 2  