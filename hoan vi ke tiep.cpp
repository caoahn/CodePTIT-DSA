#include<bits/stdc++.h> 
using namespace std; 
int main() { 
   int t ; 
   cin >> t ; 
   while(t--) { 
      int n ; 
      cin >> n ;  
      int ok = 1 ; 
      int a[n] ; 
      for(int i=1 ; i<=n;i++) {  
        cin >> a[i] ; 
	  } 
	  int i = n-1 ; 
	  while(i >= 1 && a[i] > a[i+1]) { 
	    --i ; 
	  } 
	  if(i == 0 ) { 
	  a[i] = 0 ; 
	    for(int i=n ; i>= 1 ;i--) { 
	      cout << a[i] <<" " ;  
		} 
		ok = 0 ;  
		cout << endl ;  
	  } 
	  else  { 
	     int j = n ; 
	     while(a[i] > a[j]) { 
	        --j ; 
		 }
	     swap(a[i],a[j]) ; 
	      int l=i+1 ; 
	      int r = n ; 
	      while( l < r ) { 
	         swap(a[l],a[r]) ;  
	         ++l ; 
	         --r; 
		  }
	  } 
	  if(ok) {  
	  for(int i=1 ; i<=n;i++) { 
	    cout <<a[i] <<" " ; 
	  } 
	  cout << endl ; 
	  }  
   }
}
