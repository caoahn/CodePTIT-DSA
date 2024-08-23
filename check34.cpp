#include<bits/stdc++.h> 
using namespace std ;
int main() { 
   int t ;
   cin >> t; 
   while(t--) { 
       int n; 
       cin >> n ; 
       int a[n] ; 
       for(int i=0; i < n ; i++) { 
           cin >> a[i] ; 
	   } 
	   int tmp = -1e9-1 ; 
	   int ok = 0 ; 
	   for(int i=0; i < n ; i++) { 
	      if(a[i] > 0) ok = 1 ; 
	      if(tmp < a[i]) tmp = a[i] ; 
	   } 
	   if(ok == 0) { 
	      cout << tmp << endl ; 
	   } 
	   else { 
	      int res = -1e9-1 ; 
	      int sum = 0 ; 
	      for(int i=0; i < n ; i++) {  
	           if(sum + a[i] < 0) { 
	              sum = 0 ; 
	              continue ; 
			   } 
			   sum += a[i] ; 
			   if(res < sum) res = sum ; 
		  } 
		  cout << res << endl ;
	   }
   }
}
