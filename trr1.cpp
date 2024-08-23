#include<bits/stdc++.h> 
using namespace std ;
int n,m,c1,c2; 
vector<int> adj[1005] ;  
bool visited[1005] ;  
int p[1005] ; 
vector<int> v1 ; 
void dfs(int u) { 
      visited[u] = true ; 
      for(auto v : adj[u]) { 
              if(!visited[v]) {  
                  p[v] = u ; 
                  dfs(v); 
              }
      }
}
int main() { 
      int t ; 
      cin >> t; 
      while(t--) { 
           cin >> n >> m >> c1 >> c2 ; 
            for(int i=1 ; i<= n ; i++) { 
                    p[i] = 0 ; 
                    visited[i] = false ; 
                    adj[i].clear() ; 
            } 
           for(int i=0; i < m ; i++) { 
              int x,y ; 
              cin >> x >> y ; 
              adj[x].push_back(y) ; 
              adj[y].push_back(x) ; 
           } 
           dfs(c1) ; 
           if(!visited[c2]) { 
             cout << "-1" ; 
           } 
           else { 
               vector<int> res ; 
               while(c2 != c1) { 
                    res.push_back(c2) ; 
                    c2 = p[c2] ; 
               } 
               res.push_back(c1) ; 
               for(int i=res.size()-1 ; i>=0 ; i--) { 
                   cout << res[i] <<' ' ; 
               }
           }
           cout << endl ;
      }
}