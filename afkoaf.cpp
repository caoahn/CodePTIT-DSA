#include<bits/stdc++.h> 
using namespace std ; 
long long n,s ; 
long long a[1001] ;  
long long res  ; 
void Try(int i,long long s,long long cnt) { 
    if(s < 0) { 
       return ; 
	}  
	if(s == 0) { 
	    res = min(res,cnt) ; 
	    return ; 
	} 
	for(int j=i ; j>=1 ; j--) { 
	   if(s >= 0) { 
	      Try(j-1,s - a[j],cnt + 1 ) ; 
	   }
	}
	
}
int main() { 
   int t ;
   cin >> t; 
   while(t--) { 
      cin >> n  >> s; 
      for(int i=1 ;i<=n ; i++) { 
        cin >> a[i] ; 
	  }   
	  sort(a+1,a+n+1) ; 
	  res = 1e9+1 ; 
	  Try(n,s,0) ; 
	  cout <<res << endl ; 
   }
}
