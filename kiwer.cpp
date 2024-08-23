#include<bits/stdc++.h> 
using namespace std ; 
int color[1001] ; 
vector<int> adj[1001] ; 
int p[1001] ;  
int n, m ; 
bool dfs(int u) { 
    color[u] = 1 ; 
    for(int v : adj[u]) { 
       if(color[v] == 0) { 
          p[v] = u ; 
          if(dfs(v)) return true ; 
	   } 
	   else if(color[v] == 1) return true; 
	} 
	color[u] = 2; 
	return false; 
} 
int main() { 
   int t ; 
   cin >> t; 
   while(t--) {  
          cin >> n >> m ;  
          for(int i=0; i < 999 ; i++) { 
             color[i] = 0 ; 
             p[i] = 0 ; 
             adj[i].clear() ; 
		  }
		  for(int i=0; i < m; i++) { 
		    int x,y ; 
		    cin >> x >> y ; 
		    adj[x].push_back(y) ; 
		  } 
		  int ok = 0 ; 
		  for(int i=1 ; i<= n ; i++) { 
		     if(color[i] == 0) { 
		       if(dfs(i)) { 
		         ok = 1 ; 
			   }
			 }
		  } 
		 if(ok) cout << "YES" << endl ; 
		 else cout << "NO" << endl ;  
   }
}
