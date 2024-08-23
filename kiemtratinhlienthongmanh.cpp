#include<bits/stdc++.h> 
using namespace std;  
vector<int> adj[1001] ; 
bool visited[1001] ; 
int n,m ;
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
           cin >> n >> m ; 
           for(int i=0; i < m ; i++) { 
               int x,y ; 
               cin >> x >> y ; 
               adj[x].push_back(y) ; 
           }  
           int tplt = 0 ; 
          memset(visited,false,sizeof(visited)) ; 
          for(int i=1 ; i<= n ; i++) { 
              if(!visited[i]) { 
                 dfs(i) ;
                 ++tplt; 
              }
          } 
          if(tplt == 1) { 
             cout <<"YES" << endl ; 
          } 
          else cout <<"NO" << endl ; 
          for(int i=1 ; i<= n ; i++) { 
              adj[i].clear() ; 
          }
       }
}