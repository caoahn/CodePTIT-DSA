#include<bits/stdc++.h>
using namespace std ; 
int n ; 
int a[1001][1001];  
int x[1001] ; 
int cot[1001] , d1[1001], d2[1001] ;   
int cnt = 0 ;  
int res = -1e9-1 ; 
void Try(int i) { 
   for(int j=1 ; j<= n ; j++) { 
      if(cot[j] == 1 && d1[i+j-1] == 1 && d2[i-j+n] == 1) { 
            x[i] = j ; 
            cot[j] = d1[i+j-1] = d2[i-j+n] = 0 ; 
            if(i == n) { 
			   int sum = 0 ;  
               for(int k = 1 ; k<= n ; k++) { 
                  sum += a[k][x[k]] ; 
			   }
			   res = max(res,sum) ; 
			} 
			else Try(i+1) ; 
			cot[j] = d1[i+j-1] = d2[i-j+n] = 1 ; 
	  }
   }
}
int main() { 
  int t; 
  cin >> t; 
  while(t--) { 
     n = 8 ;  
     for(int i=0 ; i<=999 ; i++) { 
        cot[i] = d1[i] = d2[i] = 1 ;
	 }  
	 for(int i=1 ; i <= n ; i++) { 
	    for(int j=1; j <= n ; j++) { 
	      cin >> a[i][j] ; 
		}
	 }
	 Try(1) ; 
	 cout << res << endl ;  
	 res = -1e9-1 ; 
	 cnt = 0 ; 
  }
}
