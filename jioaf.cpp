#include<bits/stdc++.h> 
using namespace std ; 
int n,m ; 
vector<int> adj[1001] ; 
int p[1001] ; 
bool visited[1001] ; 
int color[1001] ; 
bool dfs(int u) { 
   color[u] = 1 ; 
   for(int v : adj[u]) { 
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
       int n,m ; 
       cin >> n >> m ;  
       for(int i=0; i <= 999 ; i++) { 
          visited[i] = false; 
          adj[i].clear() ; 
          p[i] = 0 ;  
          color[i] = 0 ; 
	   }
       for(int i=0; i < m ; i++) { 
          int x, y ;
          cin >> x >> y ; 
          adj[x].push_back(y) ; 
	   } 
	   int ok = 0 ; 
	   for(int i=1 ; i <= n ; i++) { 
	       if(!visited[i]) { 
	           if(dfs(i)) { 
	            ok = 1 ; 
		   }
		   }
	   } 
	   if(ok == 1) cout << "YES" << endl  ; 
	   else cout << "NO" << endl ; 
   }
}
