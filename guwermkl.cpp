#include<bits/stdc++.h> 
using namespace std ; 
int n, k ; 
string a[101] ; 
int x[101] ; 
int solve() { 
   int ma = -1e9 ; 
   int mi = 1e9 ;  
   for(int i=0; i < n ; i++) { 
      int num = 0 ; 
      for(int j=0; j < k ; j++) { 
         num += ( a[i][x[j]] - '0' ) * pow(10,k-j-1) ; 
	  } 
	  ma = max(ma,num) ; 
	  mi = min(mi,num) ; 
   } 
   return ma - mi ; 
}
int main() { 
        cin >> n >> k ; 
        for(int i=0 ; i < n ; i++) { 
          cin >> a[i] ; 
		} 
		for(int i=0 ; i < k ; i++)  { 
		  x[i] = i ; 
		} 
		int ans = 1e9 ; 
		do ans = min(ans,solve())  ; 
		while(next_permutation(x,x+k)) ;  
		cout << ans << endl ; 
 }
