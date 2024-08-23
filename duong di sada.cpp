#include<bits/stdc++.h> 
using namespace std;  
int n,m,u,v ; 
vector<int> adj[1001] ; 
bool visited[1001] ; 
int p[1001] ; 
void dfs(int u) { 
   visited[u] = true ; 
   for(int v : adj[u]) { 
     if(!visited[v]) { 
         p[v] = u ; 
         dfs(v) ; 
	 }
   }
}
int main() { 
   int t ;
   cin >> t; 
   while(t--) { 
       cin >> n >> m >> u >> v ;  
       for(int i=0 ; i<= 999 ; i++) { 
          p[i] = 0 ; 
          adj[i].clear() ; 
          visited[i] = false; 
	   }
	   for(int i=0; i < m ; i++) { 
	      int x,y ; 
	      cin >> x >> y ; 
	      adj[x].push_back(y) ; 
	   } 
	   dfs(u) ; 
	   if(!visited[v]) { 
	     cout <<"-1" << endl ; 
	   }        
	   else { 
	       vector<int> v1 ; 
	       while(v != u) { 
	          v1.push_back(v) ; 
	          v = p[v] ; 
		   }  
		   cout << u << " " ; 
		   for(int i=v1.size()-1; i>=0 ; i--) { 
		      cout << v1[i] << " " ; 
		   } 
		   cout << endl ;
	   }
   }
}
