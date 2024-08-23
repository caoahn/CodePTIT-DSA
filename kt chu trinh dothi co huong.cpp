#include<bits/stdc++.h> 
using namespace std ; 
int n,m ; 
int color[1001] ; 
int p[1001] ; 
vector<int> adj[1001] ; 
bool dfs(int u) { 
      color[u] = 1;  
      for(auto v : adj[u]) { 
         if(color[v] == 0) { 
		       p[v] = u ;  
               if(dfs(v)) return true ; 
		 } 
		 else if(color[v] == 1) return true ; 
	  } 
	  color[u] = 2; 
	  return false ;
}
int main() { 
    int t ;
    cin >> t; 
    while(t--) { 
         for(int i=0 ; i <= 1000 ; i++) { 
             adj[i].clear() ; 
             p[i] = 0 ; 
             color[i] = 0 ; 
		 }
         cin >> n >> m ; 
         for(int i=1 ; i<= m ; i++) { 
             int x,y ; 
             cin >> x >> y ;   
             adj[x].push_back(y) ; 
		 }  
		 bool ok = false; 
		 for(int i =1 ; i<= n ; i++) { 
		    if(color[i] == 0) { 
		        if(dfs(i)) { 
		           ok = true  ;  
		           break ; 
				}
			}
		 } 
		 if(ok) cout <<"YES" << endl ; 
		 else cout <<"NO" << endl ; 
	}
}
