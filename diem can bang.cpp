#include<bits/stdc++.h> 
using namespace std ;
int main() { 
   int t ; 
   cin >> t ; 
   while(t--) { 
      int n ; 
      cin >> n ; 
      int a[n] ;  
      int sum = 0 ; 
      for(int i=0; i <n ; i++) { 
          cin >> a[i] ; 
		  sum += a[i] ;  
	  } 
	  int sum2 = 0 ; 
	  int sum3 = 0 ; 
	  int res;     
	  int ok = 0 ; 
	  for(int i=0; i < n;i++) { 
	   sum2 += a[i] ; 
	   sum3 = sum - sum2 + a[i] ; 
	   if(sum3 == sum2) { 
	      res = i+1  ; 
		  ok = 1 ; 
		  break ;  
	   }
	  } 
	  if(ok == 0) { 
	    cout <<"-1" << endl ; 
	  } 
	  else { 
	    cout << res << endl ; 
	  }
   }
}
