#include<bits/stdc++.h> 
using namespace std ;
int main() { 
   int t ; 
   cin >> t ; 
   while(t--) { 
      int n,k ;  
      cin >> n >> k ;  
      set<int> se ; 
      int x[k] ; 
      int b[k] ; 
      for(int i=1 ; i <= k ;i++ ) { 
          cin >> x[i] ; 
		  b[i] = x[i] ;   
		  se.insert(b[i]) ; 
	  }
	  int i = k ; 
	  int pos = 0 ; 
	  while(i >=1 && x[i] == n-k+i) { 
	     --i ; 
	  } 
	  if(i == 0) {  
		pos = 1 ; 
	  } 
	  else { 
	    ++x[i] ; 
	    for(int j=i+1 ; j<=k;j++) { 
	      x[j] = x[j-1] + 1 ; 
		}
	  }
	  int cnt = 0 ; 
	  for(int i=1 ; i<= k ; i++) { 
	    if(se.find(x[i]) != se.end()) { 
	        ++cnt ; 
		}
	  }
	if(pos == 1) { 
	  cout << k  ; 
	} 
	else { 
	  cout << k-cnt ; 
	}
	  cout << endl ; 	
   }
}

