#include<bits/stdc++.h> 
using namespace std ;
int main() { 
   int t ; 
   cin >> t ; 
   while(t--) { 
      int n,k ;  
      cin >> n >> k ; 
      int x[k] ; 
      for(int i=1 ; i <= k ;i++ ) { 
          cin >> x[i] ; 
	  }
	  int i = k ; 
	  while(i >=1 && x[i] == n-k+i) { 
	     --i ; 
	  } 
	  if(i == 0) {  
	     x[1] = 1; 
	    for(int i=2; i <=k ;i++) { 
	       x[i] = x[i-1]+1 ; 
		}
	  } 
	  else { 
	    ++x[i] ; 
	    for(int j=i+1 ; j<=k;j++) { 
	      x[j] = x[j-1] + 1 ; 
		}
	  } 
	  for(int i=1 ; i <= k ; i++) { 
	    cout << x[i] <<" " ; 
	  } 
	  cout << endl ; 	
   }
}

