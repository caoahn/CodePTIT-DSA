#include<bits/stdc++.h> 
using namespace std  ; 
int main() { 
   int t ; 
   cin >> t ; 
   while(t--) { 
       int n,m ; 
       cin >>n >> m ; 
       int a[n] ; 
       int b[m] ; 
       for(int i=0; i <  n ; i++) cin >> a[i] ; 
       for(int i=0 ; i<m;i++) cin >> b[i] ; 
       sort(a,a+n) ; 
       sort(b,b+m) ; 
	   int p[n+m] ;  
	   int i=0,j=0,cnt = 0 ; 
       while(i < n && j < m ) { 
          if(a[i] <= b[j]) { 
              p[cnt] = a[i] ; 
			  ++cnt  ; 
			  ++i ;  
		  } 
		  else { 
		     p[cnt] = b[j] ; 
		     ++cnt ; 
		     ++j ; 
		  }
	   } 
	   while(i < n) { 
	      p[cnt++] = a[i] ; 
	      ++i ; 
	   } 
	   while(j < m ) { 
	      p[cnt++] = b[j] ; 
	      ++j ; 
	   } 
	   for(auto x : p) { 
	   cout << x <<" " ; 
	   } 
	   cout << endl ; 
   }
}

