#include<bits/stdc++.h> 
using namespace std ; 
vector<int> adj[10001]  ; 
bool visited[10001] ; 
int n,m ;   
vector<pair<int,int>> dscanh ; 
void nhap()  { 
     cin >> n >> m ;
      for(int i=0; i < m ; i++) { 
          int x,y ; 
          cin >> x >> y ; 
          adj[x].push_back(y) ; 
          adj[y].push_back(x) ; 
          dscanh.push_back({min(x,y),max(x,y)}) ; 
      }
      sort(dscanh.begin(),dscanh.end()) ; 
      //memset(visited,false,sizeof(visited)) ; 
}   
void dfs(int u) { 
      visited[u] = true ; 
      for(int v : adj[u]) { 
          if(!visited[v]) { 
              dfs(v) ; 
          }
      }
} 
void dfs2(int u,int s,int t) { 
       visited[u] = true ; 
       for(int v : adj[u]) { 
          if((u == v && v == t) || (u == t && v == s)) continue;
          if(!visited[v]) dfs2(v,s,t) ; 
       }
} 
void canhcau() { 
      int ans = 0 ; 
     int tplt = 0 ; 
     memset(visited,false,sizeof(visited)) ; 
     for(int i=1 ; i<= n ; i++) { 
          if(!visited[i]) { 
              ++tplt ; 
              dfs(i) ; 
          }
     } 
     for(auto it : dscanh) { 
          int x = it.first,  y = it.second ;
          memset(visited,false,sizeof(visited)) ;  
          int dem = 0 ; 
          for(int j=1 ; j <= n ; j++) { 
             if(!visited[j]) { 
                  ++dem ;  
                  dfs2(j,x,y) ; 
             }
          } 
        if(dem > tplt) { 
            cout << x <<' ' << y<<' ' ; 
        }
     } 
}
int main() { 
      int t ; 
      cin >> t; 
      while(t--) {  
          for(int i=0; i <= n; i++) { 
             adj[i].clear() ; 
          }
          nhap() ; 
          canhcau() ; 
          cout << endl ; 
      }
}
