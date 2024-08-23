#include<bits/stdc++.h> 
using namespace std ; 
int n ; 
int a[1001][1001] ; 
int cot[100],d1[100],d2[100] ; 
int x[1001] ;  
int cnt = 0 ; 
void Try(int i) { 
   for(int j=1 ; j<= n ; j++) { 
      if(cot[j] == 0 && d1[i+j-1] == 0 && d2[i-j+n] == 0) { 
           x[i] = j ;  	
           cot[j] = d1[i+j-1] = d2[i-j+n] = 1 ; 
           if(i == n) { 
             ++cnt ; 
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
         cin >> n ;   
         for(int i=0; i<=99 ; i++) { 
            cot[i] = d1[i] = d2[i] = 0 ; 
		 } 
		 cnt = 0 ; 
		 Try(1) ; 
		 cout << cnt << endl ;    
   }
}
