#include<bits/stdc++.h> 
using namespace std ; 
vector<int> adj[10001]  ; 
bool visited[10001] ; 
int a[1001][1001]
 ; int n,m ;  
void inp() { 
      cin >> n  ; 
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
void dfs(int u) { 
      visited[u] = true ; 
      for(int v : adj[u]) { 
          if(!visited[v]) { 
              dfs(v) ; 
          }
      }
} 
void dinhtru() { 
     int ans = 0 ; 
     int tplt = 0 ; 
     memset(visited,false,sizeof(visited)) ; 
     for(int i=1 ; i<= n ; i++) { 
          if(!visited[i]) { 
              ++tplt ; 
              dfs(i) ; 
          }
     }
     for(int i=1 ; i<= n ; i++) { 
         // loai bo dinh i
         memset(visited,false,sizeof(visited)) ; 
         visited[i] = true ; 
         int dem = 0 ; // dem so tplt sau khi loai dinh i 
         for(int j=1 ; j <= n ; j++) { 
               if(!visited[j]) { 
                  ++dem ; 
                  dfs(j) ; 
               }
         } 
         if(dem > tplt) { 
              cout << i <<' ' ; 
         }
     } 
} 
int main() { 
          for(int i=0; i <= n; i++) { 
             adj[i].clear() ; 
          }
          inp() ; 
          dinhtru() ; 
          cout << endl ; 
}
