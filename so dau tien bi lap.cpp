#include<bits/stdc++.h> 
using namespace std ; 
int main() { 
   int t ; 
   cin >> t ; 
   while(t--) { 
      long long n ; 
      cin >> n ; 
      long long a[n] ; 
      map<long long,long long> mp ; 
      for(long long i=0; i < n ; i++) { 
        cin >> a[i] ; 
		mp[a[i]]++ ;  
	  }  
	  int ok = 0 ; 
	  for(long long i=0; i < n ; i++) { 
	    if(mp[a[i]] > 1) { 
	       cout << a[i] << endl ;  
	       mp[a[i]] = 0 ;  
	       ok = 1 ;  
	       break ; 
		}
	  } 
	  if(ok == 0) cout << "NO" << endl ;
   }
}
