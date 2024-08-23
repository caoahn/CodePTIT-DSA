#include<bits/stdc++.h> 
using namespace std ;
int main() { 
   int t ; 
   cin >> t; 
   while(t--)  { 
       int n ; 
       cin >> n ; 
       long long a[n] ; 
	   long long b[n] ;  
       for(int i=0; i < n ; i++) { 
         int x ; 
         cin >> x ; 
         b[i] = (long long)x*x ; 
	   }  
	   int ok= 0 ; 
	   for(int i=0; i < n ; i++) { 
	     long long tmp = b[i] ; 
	     int l=0; 
	     int r = n-1 ; 
	     while(l <= r) { 
	        if(b[l] + b[r] == tmp) { 
	            ok = 1; 
	            break ; 
			} 
			else if(b[l] + b[r] < tmp) { 
			      ++l ; 
			} 
			else --r ; 
		 }
	   } 
	   if(ok == 1) cout << "YES" << endl ; 
	   else cout << "NO" << endl ; 
   }
}
