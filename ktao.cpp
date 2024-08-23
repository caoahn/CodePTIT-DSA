#include<bits/stdc++.h>
using namespace std ; 
void ktao(int a[],int k) { 
   for(int i=1 ; i<= k ; i++) { 
     a[i] = i ; 
   }
}
int main() { 
   int t ; 
   cin >> t ; 
   while(t--) { 
      int n,k,a[100],ok=1 ; 
      cin >> n>> k ; 
	  ktao(a,k) ; 
	  int x[100] ; 
	  for(int i=1 ; i<= k ; i++) { 
	    cin >> x[i] ; 
	  } 
	  int dem = 1 ; 
	  int dem2 = 0 ; 
	  while(ok) { 
	      for(int i=1 ; i<= k ; i++) { 
	         if(a[i] == x[i]) { 
	           ++dem2 ; 
			 }
		  } 
		  if(dem2 == k) { 
		     cout << dem << endl ;  
		     break ; 
		  } 
		  else {  
		  ++dem ; 
		     dem2 = 0 ; 
		      int i=k ; 
		while(i >= 1 && a[i] == n-k+i) { 
		     --i ; 
		} 
		if(i == 0) { 
		  ok=0; 
		} 
		else { 
		   ++a[i] ; 
		   for(int j=i+1 ; j <=k;j++) { 
		       a[j] = a[j-1]+1 ; 
		   }
		}
	  } 
		  }
   } 	
}
