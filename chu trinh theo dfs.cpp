#include<bits/stdc++.h>   
using namespace std ; 
int n,m ; 
vector<int> adj[1001] ; 
bool visited[1001] ; 
int p[10001] ;  
 int st,en  ; 
bool dfs(int u) { 
    visited[u] = true ; 
    for(auto v : adj[u]) { 
        if(!visited[v]) { 
            p[v] = u ; 
            if(dfs(v)) return true ; 
		} 
		else if(v != p[u] && v == 1) { 
		    st = v ; 
		    en = u ; 
		    return true ; 
		}
	}
	return false ;  
}
using namespace std; 
int main() { 
    int t ;
    cin >> t; 
    while(t--) { 
       for(int i=0; i<= 1000 ; i++) { 
          visited[i] = false;  
          adj[i].clear() ; 
          p[i] = 0 ; 
	   } 
	   cin >> n >> m ; 
	   for(int i=1 ;i<= m ; i++) { 
	      int x,y ; 
	      cin >>x >> y ; 
	      adj[x].push_back(y) ; 
	      adj[y].push_back(x) ; 
	   }  
	   for (int i = 1; i <= n; i++) {
			sort(adj[i].begin(), adj[i].end());
		}
	   if(dfs(1)) { 
	           vector<int> c ;   
	     	   c.push_back(st) ; 
				while(en != st) { 
				    c.push_back(en) ; 
				    en = p[en] ; 
				} 
				c.push_back(st) ;   
				reverse(c.begin(),c.end()); 
				for(int x : c) { 
				  cout << x <<' ' ; 
				} 
				cout << endl ;
	   } 
	   else cout << "NO" << endl ; 
	}
}
