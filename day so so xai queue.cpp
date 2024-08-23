#include<bits/stdc++.h> 
using namespace std ; 
int main() { 
   int t ; 
   cin >> t ; 
   while(t--) { 
       int n  ;
       cin >> n ; 
       int a[n] ;
	   queue<int> q ;  
       for(int i=0 ; i< n ; i++) { 
         int x ; 
         cin >> x ; 
         q.push(x) ; 
	   } 
	   for(int i=1 ; i<= n ; i++) { 
	       cout <<'['  ;  
	       for(int j=n-i ; j >= 0 ; j--) { 
	           int res = q.front() ; 
	           cout << res ; 
	           if(j) cout <<' ' ; 
	           q.pop() ; 
	           res += q.front() ; 
	           if(j) q.push(res) ; 
		   } 
		   cout <<"]" << endl ; 
	   }
   }
}
