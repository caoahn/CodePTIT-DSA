#include<bits/stdc++.h> 
using namespace std ; 
int n, m ; 
vector<int> adj[1001] ; 
int p[1001] ; 
bool visited[1001] ;  
void dfs(int u) { 
    visited[u] = true ; 
    for(int v : adj[u]) { 
        if(!visited[v]) { 
            p[v] = u ; 
            dfs(u) ; 
		}
	}
} 
void bfs(int u) { 
   queue<int> q ; 
   q.push(u) ; 
   visited[u] = true ; 
   while(!q.empty()) { 
       int v = q.front() ;
       q.pop() ; 
       for(int x : adj[v]) { 
          if(!visited[x]) { 
             q.push(x) ; 
             visited[x] = true ; 
             p[x] = v ; 
		  }
	   }
   }
}
int main() { 
    cin >> n >> m ;   
    for(int i=0; i < 999 ; i++) { 
      visited[i] = false ; 
      p[i] = 0 ; 
      adj[i].clear() ; 
	}
    for(int i=0; i <  m; i++) { 
        int x, y ;
        cin >> x >> y ; 
        adj[x].push_back(y) ; 
        adj[y].push_back(x) ; 
	} 
	vector<int> v ; 
	for( int x : adj[1]) { 
	    v.push_back(x) ; 
	}  
	  int c1 = 1 ; 
	  int c2 = 2 ; 
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
//	for(int i=0 ; i < v.size() ; i++) { 
//		 if(!visited[v[i]]) { 
//		    cout <<"-1" << endl ; 
//		 } 
//		 else { 
//		    vector<int> res ; 
//		    while(v[i] != 1) { 
//		       res.push_back(v[i]) ; 
//		       v[i] = p[v[i]] ; 
//			} 
//			res.push_back(1) ; 
//			for(int i=res.size()-1 ; i>=0 ; i--) { 
//			  cout << res[i] <<" " ; 
//			} 
//			cout << endl ; 
//		 }
//	}  
}
