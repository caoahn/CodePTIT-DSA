#include<bits/stdc++.h> 
using namespace std;
int main() { 
   int n ; 
   cin >> n ; 
   int a[n+1] ; 
   a[0] = 0 ; 
   for(int i=1 ; i<= n ; i++) cin >> a[i] ; 
   for(int i=1; i <= n-1  ; i++) { 
      for(int j=1;j<= n-i ; j++) { 
          if(a[j] > a[j+1]) { 
            swap(a[j],a[j+1]) ; 
		  }
	  }  
	  int ok = 1; 
	  cout <<"Buoc " <<i<<": " ; 
	  for(int i=1; i <= n ; i++) { 
	    if(a[i] < a[i-1]) ok = 0 ; 	 
	    cout << a[i]<<" " ; 
	  }  
	  if(ok) break; 
	  cout << endl ; 
   }
}
