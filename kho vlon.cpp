#include<bits/stdc++.h> 
using namespace std ; 
int main() { 
   int n ; 
   cin >> n ; 
   int a[n] ;  
   int b[n] ;  
   int ok = 0 ; 
   int res = 0 ; 
   for(int i=0 ; i < n ; i++) { 
      cin >> a[i] ; 
	  if(a[i] == 0) { 
	    ok = 1 ;
	}
		if(a[i] != 0) { 
		  b[res] = a[i] ; 
		  ++res ; 
		}  
   } 
   int cnt = 0 ; 
   int sum = 0 ;  
   for(int i=0; i < res  ; i++) { 
      int sum = 0 ; 
      for(int j=i ; j < res ; j++) { 
         sum += b[j] ; 
         if(sum == 0) { 
            ++cnt ; 
            break ; 
		 }
	  }
   } 
   if(ok) cout << cnt + 1 << endl ; 
   else cout << cnt << endl ; 
} 
