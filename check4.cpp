#include<bits/stdc++.h> 
using namespace std; 
int n,k ; 
int a[1001] ;   
int ok ; 
void Try(int i,int sum) { 
      if(sum > k) { 
         return ; 
      } 
      if(sum == k) { 
         ok = 1; 
         return ; 
      } 
      for(int j=i ; j <= n ; j++) { 
         if(sum + a[j] <= k) { 
              Try(j+1,sum + a[j]) ; 
         }
      }
}
int main() { 
       int t ; 
       cin >> t; 
       while(t--) { 
            cin >> n >> k ; 
            for(int i=1 ; i<= n; i++) cin >> a[i] ; 
            ok = 0 ;  
            Try(1,0) ; 
            if(ok) cout << "YES" << endl ; 
            else cout <<"NO" << endl ; 
       }
}