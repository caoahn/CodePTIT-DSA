#include<bits/stdc++.h> 
using namespace std ; 
int main() { 
   int t ; 
   cin >> t  ; 
   while(t--) { 
      int n,k ; 
      cin >> n >> k ; 
      int a[n] ; 
      for(int i=0 ; i < n; i++) { 
        cin >> a[i]  ; 
	  } 
	  sort(a,a+n) ; 
	  long long s = 0 ; 
	  for(int i=0; i < n -1 ; i++) { 
	    if(a[i] >= k) { 
	      break ; 
		} 
		for(int j=i+1; j < n ;j++ ) { 
		   int it = upper_bound(a+j+1,a+n,k-a[i]-a[j]) - a  ; 
		   if(it > j)  s += it - j - 1 ;
		   else break ; 
		}
	  } 
	  cout << s << endl ; 
   }
}
