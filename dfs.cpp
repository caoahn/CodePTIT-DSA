#include<bits/stdc++.h> 
using namespace std ; 
int n,m ; 
vector<int> adj[10001] ; 
bool visited[10001] ; 
void inp() { 
      cin >> n >> m; 
      for(int i=0 ;i < m ; i++) { 
          int x,y ; 
          cin >> x >> y ; 
          adj[x].push_back(y) ; 
          adj[y].push_back(x) ; 
      } 
      memset(visited,false,sizeof(visited)) ; 
}  
void dfs(int u) { 
      cout << u << " " ; 
      visited[u] = true; 
      for(int i=0; i < adj[u].size() ; i++) { 
          int v = adj[u][i] ;  
          if(!visited[v]) { 
               dfs(v) ; 
          }
      }
} 
int main() { 
       inp() ; 
       dfs(1) ;  
}
