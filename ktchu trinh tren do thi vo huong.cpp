#include<bits/stdc++.h> 
using namespace std ; 
int n,m ; 
vector<int> adj[1001] ; 
bool visited[1001] ; 
int p[1001] ;  
bool dfs(int u) { 
     visited[u] = true ; 
     for(auto v : adj[u]) { 
        if(!visited[v]) { 
		    p[v] = u ;  
            if(dfs(v)) return true ; 
		} 
		else if(v != p[u]) return true  ; 
	 } 
	 return false; 
}
int main() {  
     int t; 
     cin >> t ; 
     while(t--) { 
          for(int i=0; i<= 1000 ; i++) { 
              adj[i].clear() ; 
              p[i] = 0 ; 
              visited[i] = false; 
		  }
         cin >> n >> m; 
         for(int i=1 ; i<= m ; i++) { 
             int x,y ; 
             cin >> x >> y ; 
             adj[x].push_back(y) ; 
             adj[y].push_back(x) ;  
		 }  
		 bool ok = false; 
		 for(int i=1; i<= n ; i++) { 
		    if(!visited[i]) { 
		        if(dfs(i)) { 
		           ok = true ; 
		           break ; 
				} 
			}
		 } 
		 if(ok) cout << "YES" << endl ;  
		 else cout << "NO" << endl ; 
 	 }
}
