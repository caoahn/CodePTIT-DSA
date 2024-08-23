#include<bits/stdc++.h> 
using namespace std ; 
bool visited[10001] ; 
vector<int> adj[10001] ; 
int a[1001][1001] ; 
void bfs(int u) { 
      queue<int> q ; 
      q.push(u) ; 
      visited[u] = true; 
      while(!q.empty()) { 
          int v=q.front() ; 
          q.pop() ; 
          cout << v <<" " ; 
          for(auto x : adj[v]) { 
             if(!visited[x]) { 
                  q.push(x) ;
                  visited[x] = true; 
             }
          }
      }
} 
int main()  { 
          int n,m,k ; 
          cin >> n   >> k ; 
         for( int i = 1 ; i<= n ; i++) { 
          for(int j=1 ; j <= n ; j++) {  
               cin >> a[i][j] ; 
               if(a[i][j] == 1) { 
                   adj[i].push_back(j) ;  
                   adj[j].push_back(i)  ;
               }
          }
      } 
          memset(visited,false,sizeof(visited)) ; 
          bfs(k) ; 
          memset(adj,0,sizeof(adj)) ; 
          cout << endl ; 
}
