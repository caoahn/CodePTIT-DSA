#include<bits/stdc++.h> 
using namespace std ; 
vector<int> adj[1001] ; 
bool visited[1001] ; 
int p[1001] ;  
int color[1001] ; 
bool dfs(int u) { 
     visited[u] = true ; 
     for(auto v : adj[u]) { 
         if(!visited[v]) { 
             p[v] = u ; 
             if(dfs(v)) return true ; 
		 } 
		 else if(v != p[u]) return true ; 
	 } 
	 return false; 
} 
bool dfs2(int u) { 
    color[u] = 1;  
    for(auto v : adj[u]) { 
      if(color[v] == 0) { 
           p[v] = u ; 
		    if(dfs2(v)) return true ; 
	  } 
	  else if(color[v] == 1) return true ; 
	}  
	color[u] = 2; 
	return false; 
}
int main() { 
    int t ; 
    cin >> t ;
    while(t--) { 
        int n,m ; 
        cin >> n >> m ; 
        for(int i=0; i< 1000 ; i++) { 
           p[i] = 0 ; 
           adj[i].clear() ; 
           visited[i] = false;  
           color[i] = 0 ; 
		}   
		for(int i=0; i < m ; i++) 
		{ 
		    int x,y ; 
		    cin >> x >> y ; 
		    adj[x].push_back(y) ; 
		}
		bool ok = false; 
		for(int i = 1 ; i<= n ; i++) { 
		  if(!visited[i]) { 
		     if(dfs2(i)) { 
		       ok = true ; 
			 }
		  }
		} 
		if(ok) cout << "YES" << endl ; 
		else cout << "NO" << endl ; 
	}
}
