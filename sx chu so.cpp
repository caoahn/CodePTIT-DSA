#include<bits/stdc++.h> 
using namespace std ;   
set<int> se; 
void check(int n) { 
  while(n > 0) { 
     se.insert(n % 10) ; 
     n/=10; 
  }
}
int main() { 
    int t ;
    cin >> t ; 
    while(t--) { 
       int n ; 
       cin >> t ; 
       int a[n] ; 
       for(int i=0; i < n ;i++) { 
         cin >> a[i] ; 
	   }  
	   for(int x : se) { 
	     cout << x << " " ; 
	   } 
	   cout << endl ;   
	   se.clear() ; 
	}
}
