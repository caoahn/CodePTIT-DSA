#include<bits/stdc++.h> ;
using namespace std; 
int main() { 
       int t ; 
       cin >> t ; 
       while(t--) { 
           int n ; 
           cin >> n ; 
           int a[n] ; 
           for(int i=0; i < n ; i++) cin >> a[i] ; 
           int dem1[n] ; 
           int dem2[n] ; 
           fill(dem1 ,  dem1+n , 1) ; 
           fill(dem2 , dem2+n , 1) ; 
           for(int i=1; i < n ; i++) { 
               if(a[i] > a[i-1]) dem1[i] = dem1[i-1]+1 ; 
           } 
           for(int i=n-2; i >= 0 ; i--) { 
               if(a[i] > a[i+1]) dem2[i] = dem2[i+1] + 1 ; 
           } 
           int ans =-1 ; 
           for(int i=0; i < n; i++) { 
              ans = max(ans,dem1[i] + dem2[i] - 1) ; 
           } 
           cout << ans << endl ; 
       } 
       return 0 ; 
}
