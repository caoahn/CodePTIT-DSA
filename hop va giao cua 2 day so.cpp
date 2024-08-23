#include<bits/stdc++.h> 
using namespace std ; 
int main() { 
    int t ; 
    cin >> t; 
    while(t--) { 
       int n,m ; 
       cin >> n >> m ; 
       int a[n], b[m] ; 
       set<int> se ; 
	   set<int> se1  ; 
	   set<int> se2 ;  
       for(int i=0; i <n ; i++) { 
         cin >> a[i] ; 
         se.insert(a[i]) ; 
		 se1.insert(a[i]) ;  
	   }
       for(int i=0; i < m ; i++) { 
         cin >> b[i] ; 
         se.insert(b[i]) ; 
	   } 
	   for(int i=0;i<m;i++){
	   	  if(se1.count(b[i])) { 
	   	     se2.insert(b[i]) ; 
			 }
	   } 
	   for(auto it : se) { 
	     cout << it << " " ; 
	   } 
	   cout << endl ;  
	   for(auto x : se2) { 
	      cout << x <<" " ; 
	   } 
	   cout << endl ; 
	}
}
