#include<bits/stdc++.h> 
using namespace std ;
int main() { 
   int n ; 
   cin >>  n ; 
   int a[n] ; 
   for(int i=0; i < n; i++) { 
     cin >> a[i] ; 
   } 
   int cnt = 0 ;  
   int ok = 0 ; 
   int res = -1 ; 
   for(int i=0 ; i < n ; i++) { 
      int sum = a[i] ;
	  if(a[i] == 0 && ok == 0) { 
	    ++cnt ; 
	    ok = 1;
	  }  
      for(int j=i+1 ; j<n ; j++) { 
         sum += a[j] ; 
         if(sum == 0 && sum != res) { 
           ++cnt ; 
		 } 
		 res = sum ; 
	  }
   } 
   cout << cnt << endl ; 
}
