#include<bits/stdc++.h> 
using namespace std ; 
int n ;
int a[1001] ; 
bool ok = false ; 
  int s = 0 ; 
void Try(int i,int sum) { 
   for(int j=i ; j<= n ; j++) { 
       if(sum + a[j] <= s/2) { 
         if(sum + a[j] == s/2) { 
           ok = true ; 
           return ; 
		 } 
		 else Try(j+1,sum + a[j]) ; 
	   } 
   }
}
int main() { 
   int t ;
   cin >> t; 
   while(t--)  { 
      cin >> n ;  
      for(int i=1 ; i <= n ; i++) { 
         cin >> a[i] ; 
		 s += a[i] ;  
	  } 
	  Try(1,0) ; 
	  if(s %2 != 0) { 
	    cout <<"NO" << endl ; 
	  } 
	  else { 
	      if(ok == true) cout << "YES" << endl ; 
	      else cout << "NO" << endl ; 
	  }  
	  ok = false ;  
	  s = 0 ; 
   }
}
