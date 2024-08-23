#include<bits/stdc++.h> 
using namespace std  ; 
long long a[1000001] ; 
void sang() { 
  for(int i=0 ; i <= 1000000 ; i++) { 
     a[i] = 1; 
  } 
  a[0] = a[1] = 0 ; 
  for(int i=2 ; i<= 1000 ; i++) { 
     if(a[i]) { 
       for(int j=i*i ; j <= 1000000 ; j+= i )  { 
             a[j] = 0 ; 
	   }
	 }
  }
} 
int main () { 
   int  t; 
   cin >> t ; 
   while(t--) 
   { 
     int n ; 
     cin >> n ;  
     sang() ;  
     int ok = 0 ; 
     for(int i=2 ; i <= n/2; i++) { 
		 if(a[i] == 1 && a[n-i] == 1) { 
		   cout << i <<" " << n-i << endl ; 
		   ok =1 ; 
		   break ;    
		 }
	 } 
	 if(ok == 0) { 
	   cout <<"-1" << endl ; 
	 }
   }
}
