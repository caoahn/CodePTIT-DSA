#include<bits/stdc++.h> 
using namespace std; 
int n,m,c1,c2  ;  
vector<int> adj[1001] ; 
int p[1001] ; 
bool visited[1001] ; 
void bfs(int u) { 
       queue<int> q ; 
       q.push(u) ; 
       visited[u] = true ; 
       while(!q.empty()) { 
           int v = q.front() ; 
           q.pop() ; 
           for(auto x : adj[v]) {  
               if(!visited[x]) { 
                      q.push(x) ; 
                      p[x] = v ; 
                     visited[x] = true ;
               } 
           }
       }
}
int main() { 
      int t ;
      cin >> t; 
      while(t--) { 
            for(int i=1 ; i<= n ; i++) { 
                   adj[i].clear() ; 
                   visited[i] = false ; 
                   p[i] = 0 ; 
            }
            cin >> n >> m >> c1 >> c2 ; 
            for(int i=0 ; i < m ; i++) { 
                  int x,y ; 
                  cin >> x >> y ; 
                adj[x].push_back(y) ; 
                adj[y].push_back(x) ; 
            }
            bfs(c1) ; 
            if(!visited[c2]) { 
                  cout <<"-1" ; 
            } 
            else { 
                  vector<int> res ; 
                  while(c2 != c1) { 
                       res.push_back(c2) ; 
                       c2 = p[c2] ; 
                  } 
                  res.push_back(c1) ; 
                  for(int i=res.size()-1 ; i>= 0 ; i--) { 
                       cout << res[i] <<' ' ; 
                  }
            } 
            cout << endl ; 
      }
}