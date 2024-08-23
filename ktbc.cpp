#include<bits/stdc++.h> 
using namespace std ;
int n ; 
int a[1001][1001] ;  
int x[1001] ; 
int cot[1001] ; 
int d1[1001], d2[1001] ;  
int res = -1e9-1 ;
void Try(int i) { 
   for(int j=1 ; j<= n ; j++) { 
      if(cot[j] == 0 && d1[i+j-1] == 0 && d2[i-j+n] == 0) { 
          x[i] = j ; 
           cot[j] = d1[i+j-1] = d2[i-j+n] = 1 ; 
           if(i == n) { 
		      int sum = 0 ;  
              for(int z = 1 ; z <= n ; z++) { 
                 sum += a[z][x[z]] ; 
			  } 
			  res = max(res,sum) ; 
		   } 
		   else Try(i+1) ; 
		   cot[j] = d1[i+j-1] = d2[i-j+n] = 0 ; 
	  }
   }
}
int main() { 
   int t ;
   cin >> t; 
   while(t--) { 
       for(int i=0; i <= 999 ; i++) { 
          cot[i] = d1[i] = d2[i] = 0 ; 
	   } 
	   n = 8 ; 
	   for(int i=1 ;i<= 8 ; i++) { 
	     for(int j=1 ; j<= 8 ; j++) { 
	        cin >> a[i][j] ; 
		 }
	   } 
	   Try(1) ; 
	   cout << res << endl ; 
   }
} 
