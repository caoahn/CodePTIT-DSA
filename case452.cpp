#include<bits/stdc++.h> 
using namespace std ;  
const long long du = 1e9+7 ; 
int main() {    
   int  t ; 
   cin >> t; 
   while(t--) { 
      long long n;
      cin >> n ; 
      long long a[n] ;  
      long long res = 0 ; 
      for(int i=0; i < n ; i++) { 
        cin >> a[i] ; 
	  }  
	  sort(a,a+n) ; 	
	  for(int i=0; i < n ; i++) { 
	     long long tmp = a[i] %du * i % du ; 
	     res += tmp % du ;   
	     res %= du ; 
	  } 
	  cout << res << endl ; 
   }
}
