#include<bits/stdc++.h> 
using namespace std;  
vector<int> adj[1001] ; 
bool visited[1001] ; 
int n,m ;
void inp() { 
      cin >> n  ; 
      for( i = 1 ; i<= n ; i++) { 
          for(int j=1 ; j <= n ; j++) {  
               cin >> a[i][j] ; 
               if(a[i][j] == 1) { 
                   adj[x].push_back(y) ;  
                   adj[y].push_back(x)  ;
               }
          }
      }
}
void dfs(int u) { 
      visited[u] = true ; 
      for(auto v : adj[u]) {  
          if(!visited[v]) { 
               dfs(v) ; 
          }
      }
}
int main() { 
            inp() ; 
           int tplt = 0 ; 
          memset(visited,false,sizeof(visited)) ; 
          for(int i=1 ; i<= n ; i++) { 
              if(!visited[i]) { 
                 dfs(i) ;
                 ++tplt; 
              }
          } 
           cout << tplt << endl ; 
}
