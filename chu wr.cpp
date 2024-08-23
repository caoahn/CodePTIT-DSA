#include<bits/stdc++.h> 
using namespace std ; 
vector<int> adj[1001] ; 
bool visited[1001] ; 
int p[1001] ; 
int n,m ; 
bool dfs(int u) { 
   visited[u] = true ; 
   for(int v : adj[u]) { 
      if(!visited[v]) { 
         p[v] = u ; 
         if(dfs(v)) return true ; 
	  } 
	  else if(v != p[u]) return true ; 
   } 
   return false; 
}
int main() { 
    int t ; 
    cin >> t; 
    while(t--) { 
       cin >> n >> m ;  
       for(int i=0; i < 999 ; i++) { 
          adj[i].clear() ; 
          visited[i] = false ;  
          p[i] = 0 ; 
	   }
       for(int i=0; i < m ; i++) { 
           int x,y ;
           cin >> x >> y ; 
           adj[x].push_back(y) ; 
           adj[y].push_back(x) ; 
	   }
	   int ok = 0 ; 
	   for(int i=1 ; i<= n ; i++) { 
	     if(!visited[i]) { 
	         if(dfs(i)) { 
	           ok = 1 ; 
			 }
		 }
	   } 
	   if(ok) cout <<"YES" << endl ; 
	   else cout << "NO" << endl ; 
	}
}
