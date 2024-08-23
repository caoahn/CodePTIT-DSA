#include<bits/stdc++.h> 
using namespace std; 
int main() { 
    int t; 
    cin >> t; 
    while(t--) { 
          int n,x ; 
          cin >> n >> x; 
          int a[n] ; 
          for(int i=0; i < n ; i++) cin >> a[i] ; 
          sort(a,a+n) ;  
          int ok = 1 ; 
          int res ;  
          int it = lower_bound(a,a+n,x) - a ; 
          if(a[it] != x) { 
              --it ; 
          } 
          if(it <=  0) cout << "-1" << endl ; 
          else cout << it + 1 << endl ; 
          
    } 
    return 0 ; 
}