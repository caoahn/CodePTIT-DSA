#include<bits/stdc++.h> 
using namespace std;         
long long s ; 
long long res ; 
int n ; 
long long t[1001] ; 
void Try(int i,int s,long long cnt) { 
     if(s < 0) { 
         return ; 
     } 
      if(s == 0) { 
          res = min(res,cnt) ; 
          cnt = 0 ;
          return ; 
      } 
      for(int j=i ; j >=1 ; j--) { 
        if(s > 0) { 
             Try(j-1,s-t[j], cnt + 1) ; 
        }
      }
}
int main() { 
      cin >> n >> s;
      for(int i=1 ; i <= n ; i++) { 
        cin >> t[i] ; 
      }
      sort(t+1,t+1+n) ; 
         res = 1e9+1 ; 
      Try(n,s,0) ; 
      if(res == 1e9+1) { 
         cout <<"-1" << endl ; 
      } 
      else { 
        cout <<res << endl ; 
      }
}