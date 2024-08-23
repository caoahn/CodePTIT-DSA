#include<bits/stdc++.h> 
using namespace std ; 
int main() { 
    int t; 
    cin >>t ; 
    while(t--) { 
       long long n, k ; 
       cin >> n >> k ; 
       long long a[n] ; 
       for(long long &x : a) cin >> x ;  
       int ok = 0 ; 
       sort(a,a+n) ;  
       long long s = 0 ; 
       for(long long i=0; i < n ; i++) {   
         if(s != 0 ) break;  
          for(long long j = i + 1 ; j < n ; j++) {   
             auto it1 = lower_bound(a+j+1,a+n,k-a[i]-a[j])  ; 
             auto it2 = upper_bound(a+j+1,a+n,k-a[i]-a[j]) ; 
             s += it2 - it1 ; 
             if(s != 0 ) { 
               ok = 1 ; 
               break ; 
			 }
		  }
	   } 
	   if(ok != 0) cout <<"YES" << endl ; 
	   else cout << "NO" << endl ; 
	}
}
