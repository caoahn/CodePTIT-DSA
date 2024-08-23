#include<bits/stdc++.h> 
using namespace std ;
vector<int> adj[1001] ; 
bool visited[1001] ; 
void dfs(int u) { 
       visited[u] = true ;  
       for(auto v : adj[u]) { 
          if(!visited[v]) { 
              dfs(v) ; 
          }
       }
}
int main() { 
      int t ;
      cin >> t; 
      while(t--) {  
          memset(visited,false,sizeof(visited)) ; 
           memset(adj,0,sizeof(adj)) ; 
            int u,v ; 
            cin >> u >> v ; 
            for(int i=0; i < v ; i++) { 
                  int x,y  ; 
                  cin >> x >> y ; 
                  adj[x].push_back(y) ; 
                  adj[y].push_back(x) ; 
            } 
         int q ; 
         cin >> q; 
         while(q--) { 
              int x1,y1 ; 
              cin >> x1 >> y1 ;  
              memset(visited,false,sizeof(visited)) ; 
              dfs(x1) ; 
              if(!visited[y1]) { 
                  cout <<"NO" << endl ; 
              } 
              else { 
                 cout << "YES" << endl ; 
              }
         }
      }
}