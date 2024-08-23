#include<bits/stdc++.h> 
using namespace std ; 
int f[1001][1001] ; 
void test() { 
      string a,b ; 
      cin >> a >> b ; 
      int res  = 0 ; 
      memset(f,0,sizeof(f)) ; 
      for(int i=1 ; i <= a.length() ; i++) { 
            for(int j=1 ; j<= b.length() ; j++) { 
                  if(a[i-1] == b[j-1]) { 
                      f[i][j] = f[i-1][j-1] + 1 ; 
                  } 
                  else  f[i][j] = max(f[i-1][j],f[i][j-1]) ;   
                  res = max(res,f[i][j]) ; 
            }
      } 
      cout << res ; 
}
int main() { 
      int t ; 
      cin >> t ;
      while(t--) { 
         test() ; 
         cout << endl ; 
      }
}