#include<bits/stdc++.h> 
using namespace std ;
int n,m,k ; 
vector<int> adj[1001] ;  
bool visited[1001] ;  
int a[1001][1001] ; 
void dfs(int u) { 
      cout << u <<' ' ; 
      visited[u] = true ; 
      for(auto v : adj[u]) { 
              if(!visited[v]) { 
                  dfs(v); 
              }
      }
}
void inp() { 
      cin >> n  >> k ; 
      for( int i = 1 ; i<= n ; i++) { 
          for(int j=1 ; j <= n ; j++) {  
               cin >> a[i][j] ; 
               if(a[i][j] == 1) { 
                   adj[i].push_back(j) ;  
                   adj[j].push_back(i)  ;
               }
          }
      }
} 
int main() { 
        inp()  ; 
           memset(visited,false,sizeof(visited)) ;  
           dfs(k) ; 
           memset(adj,0,sizeof(adj)) ; 
           cout << endl ;
}
