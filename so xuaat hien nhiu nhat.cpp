#include<bits/stdc++.h> 
using namespace std ; 
int main() { 
   int t ; 
   cin >> t; 
   while(t--) { 
      int n ; 
      cin >> n ; 
      long long a[n] ;  
      map<long long,long long> mp ; 
	   int res = -1e9-1 ;   
      for(long long i=0; i < n ; i++)  { 
         cin >> a[i] ; 
         mp[a[i]]++ ; 
         int k = mp[a[i]] ; 
         res = max(res,k) ; 
	  } 
	  if(res <=  n/2 ) cout <<"NO" << endl ; 
	  else { 
	     for(auto x : mp) { 
	       if(x.second == res) { 
	        cout << x .first << endl ;  
	        break ;
		   }
		 }
	  }
   }
}
