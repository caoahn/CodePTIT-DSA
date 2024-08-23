#include<bits/stdc++.h> 
using namespace std ; 
int n,m,k ; 
vector<int> adj[1001] ; 
bool visited[1001] ; 
void dfs(int u) { 
      cout << u << " "; 
      visited[u] = true; 
      for(auto x : adj[u]) { 
        if(!visited[x]) { 
            dfs(x) ; 
		}
	} 
} 
int main() {  
     int t ;
     cin >> t ; 
     while(t--) {  
         int n,m , k ; 
         cin >> n >> m >> k ; 
          for(int i=0 ;i < m ; i++) { 
          int x,y ; 
          cin >> x >> y ; 
          adj[x].push_back(y) ; 
          adj[y].push_back(x) ; 
      }  
        dfs(k) ;      
        memset(visited,false,sizeof(visited)) ; 
        memset(adj,0,sizeof(adj)) ; 
        cout << endl ; 
	 }
}

