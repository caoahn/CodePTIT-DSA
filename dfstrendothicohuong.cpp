#include<bits/stdc++.h> 
using namespace std ;
int n,m,k ; 
vector<int> adj[1001] ;  
bool visited[1001] ; 
void dfs(int u) { 
      cout << u <<' ' ; 
      visited[u] = true ; 
      for(auto v : adj[u]) { 
              if(!visited[v]) { 
                  dfs(v); 
              }
      }
}
int main() { 
      int t ; 
      cin >> t; 
      while(t--) { 
           cin >> n >> m >> k ; 
           for(int i=0; i < m ; i++) { 
              int x,y ; 
              cin >> x >> y ; 
              adj[x].push_back(y) ; 
           } 
           memset(visited,false,sizeof(visited)) ;  
           dfs(k) ; 
           memset(adj,0,sizeof(adj)) ; 
           cout << endl ;
      }
}