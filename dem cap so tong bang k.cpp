#include<bits/stdc++.h> 
using namespace std ; 
int main() { 
   int t ; 
   cin >> t ; 
   while(t--) { 
      int n,k ; 
      cin >> n >> k ; 
      int a[n] ; 
      for(int i=0;i<n;i++) { 
         cin >> a[i] ; 
	  } 
	  sort(a,a+n) ; 
	  int cnt = 0 ; 
	  // 1 1 2 5 4 
	  for(int i=0; i < n ; i++) { 
	    auto it = lower_bound(a+i+1,a+n,k-a[i]) ; 
	    auto it2 = upper_bound(a+i+1,a+n,k-a[i]) ; 
	    cnt += it2 - it ; 
	  } 
	  cout << cnt << endl ; 
   }
}
