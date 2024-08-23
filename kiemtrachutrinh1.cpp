#include<bits/stdc++.h> 
using namespace std ;  
vector<int> adj[1001] ; 
int n, m ;  
int deg[1001] ; 	 
void check() { 
   int cnt = 0 ; 
   for(int i=1 ; i<= n  ; i++) {  
        if(deg[i]% 2 == 0) { 
            ++cnt ; 
		}
   } 
   if(cnt == n) { 
    cout << "YES" << endl ; 
   } 
   else cout <<"NO" << endl ; 
}
int main() { 
   	int t ; 
	cin >> t; 
	while(t--) {  
	     for(int i=0; i <= n ; i++) { 
	        adj[i].clear() ; 
	        deg[i] = 0 ; 
		 }
	    cin >> n >> m ; 
	    for(int i=1; i<= m ; i++) { 
	        int x, y ; 
	        cin >> x >> y ; 
	        adj[x].push_back(y) ; 
	        adj[y].push_back(x) ;  
	        deg[x]++ ; 
	        deg[y]++ ; 
		} 
		check() ; 
	} 
} 
