#include<bits/stdc++.h>
using namespace std ; 
vector<int> adj[1005] ; 
vector<pair<int,int>> p ; 
bool visited[1005] ;  
int n,m;
// void dfs(int u) { 
//       visited[u] = true ; 
//       for(int v : adj[u]) { 
//           if(!visited[v]) { 
//               dfs(v); 
//           }
//       }
// } 
void dfs(int s) {
	stack<int>st;
	st.push(s);
	visited[s] = true;
	while (st.size()) {
		int x = st.top();
		st.pop();
		for (auto y : adj[x]) {
			if (!visited[y]) {
				visited[y] = true;
				st.push(x);
				st.push(y);
				break;
			}
		}
	}
}
void dfs2(int u,int s,int t) { 
      visited[u] = true; 
      for(int v : adj[u]) { 
           if (!visited[v]) {
			if ((v == s && u == t) || (v == t && u == s)) continue;
			dfs2(v, s, t);
		}
      }
}
int main() { 
      int t ;
      cin >> t; 
      while(t--) { 
           cin >> n >> m ; 
            memset(visited,false,sizeof(visited)) ; 
           for(int i=0; i < m ; i++) { 
              int x,y ; 
              cin >> x >> y ; 
              adj[x].push_back(y) ; 
              adj[y].push_back(x) ; 
              p.push_back({min(x,y),max(x,y)}) ; 
           } 
           sort(p.begin(),p.end()) ; 
           int tplt = 0 ; 
           for(int i=1 ; i<= n ; i++) { 
              if(!visited[i]) { 
                 ++tplt ; 
                 dfs(i) ; 
              }
           }
           memset(visited,false,sizeof(visited)) ;  
           for(auto x : p) { 
              int cnt = 0 ; 
              for(int i = 1 ; i<= n ; i++) { 
                  if(!visited[i]) { 
                     ++cnt ; 
                      dfs2(i,x.first,x.second) ; 
                  }
              } 
              if(cnt > tplt) { 
                 cout << x.first <<' ' <<x.second <<' '  ; 
              }
               memset(visited,false,sizeof(visited)) ; 
           }  
           for(int i=1 ; i<= n ; i++) { 
              adj[i].clear() ; 
           } 
           p.clear() ; 
           cout << endl ; 
      }
}
