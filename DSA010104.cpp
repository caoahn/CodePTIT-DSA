#include<bits/stdc++.h> 
using namespace std ; 
int n,k,s ; 
int a[1005] ;
int ok,cnt ;  
void Try(int i,int sum) { 
      for(int j=a[i-1]+1 ; j<= n-k+i ; j++) { 
         a[i] = j ; 
         if( i <= k && sum + a[i] <= s) { 
              if(i == k && sum + a[i] == s) { 
                 ++cnt ; 
              } 
              else { 
                Try(i+1,sum+a[i]) ; 
              }
         }
      }
}
int main() { 
      while(1) {
          cin >> n >> k >> s ;  
          if( n == 0 && k == 0 && s == 0) { 
           return 0 ; 
          }  
          cnt = 0 ; 
          Try(1,0) ; 
          cout << cnt << endl ; 
      } 
      return 0 ; 
}