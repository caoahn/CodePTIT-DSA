#include<bits/stdc++.h> 
using namespace std ;
int n,m,k ; 
vector<int> adj[1001] ;  
bool visited[1001] ; 
void bfs(int u) { 
         queue<int> q ; 
         q.push(u) ; 
         visited[u] = true ; 
         while(!q.empty()) { 
               int v=q.front() ; 
               q.pop() ; 
               cout << v <<' ' ; 
               for(auto x : adj[v]) { 
                     if(!visited[x]) { 
                          q.push(x) ; 
                          visited[x] = true ; 
                     }
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
           bfs(k)  ; 
           memset(adj,0,sizeof(adj)) ; 
           cout << endl ;
      }
}