#include<bits/stdc++.h> 
using namespace std ; 
int main() { 
   int t ; 
   cin >> t; 
   while(t--) { 
      int n; 
      cin >>n ; 
      int a[n] ; 
      for(int i=0; i < n ; i++) { 
        cin >> a[i] ; 
	  } 
	  sort(a,a+n) ;  
	  int m = 1e9+1; 
	  int sub = 0 ; 
	  for(int i=0; i < n-1 ; i++)  { 
	    for(int j=i+1 ; j < n ; j++) { 
	       sub = a[j] - a[i] ; 
	       m = min(m,sub) ; 
		}
	  } 
	  cout << m << endl ; 
   }
}
