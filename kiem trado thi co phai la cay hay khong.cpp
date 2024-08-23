#include<bits/stdc++.h> 
using namespace std ;
int main() { 
    int  t;
    cin >> t; 
    while(t--) { 
        int n ; 
        cin >> n ; 
		set<int> se ;  
        for(int i=0; i<n-1 ; i++) { 
           int u,v ; 
           cin >> u >> v ; 
           se.insert(u) ; 
           se.insert(v) ; 
		}
		if(se.size() != n) { 
		  cout << "NO" << endl ; 
		} 
		else cout << "YES" << endl ; 
	}
}
