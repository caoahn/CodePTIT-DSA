#include<bits/stdc++.h> 
using namespace std ; 
vector<int> adj[1001] ; 
bool visited[1001] ; 
int deg[1001] ; 
void dfs(int u) { 
     visited[u] = true ; 
     for(int v : adj[u]) { 
        if(!visited[v]) { 
           dfs(v)  ; 
		}
	 }
} 
void testcase() { 
     int n,m ; 
     cin >> n >> m ; 
     for(int i=0; i < m ; i++) { 
         int x,y ; 
         adj[x].push_back(y) ;
         adj[y].push_back(x) ; 
         deg[x]++ ; 
         deg[y]++; 
	 } 
}
int main() { 
   int t ;
   cin >> t; 
   while(t--) { 
          int n,m ; 
          cin >> n >> m ; 
          for(int i=0 ; i < 99 ; i ++) { 
	    adj[i].clear() ; 
	    visited[i] = false; 
	    deg[i] = 0 ; 
	 }
        for(int i=0; i < m ; i++) { 
         int x,y ;  
         cin >> x >> y ; 
         adj[x].push_back(y) ;
         adj[y].push_back(x) ; 
         deg[x]++ ; 
         deg[y]++; 
	 }   
	 int tplt = 0 ; 
	 for(int i=1 ; i<= n ; i++) { 
	   if(!visited[i]) { 
	   ++tplt ; 
	     dfs(i) ; 
	   }
	 } 
	 int cnt = 0 ; 
	 for(int i=1 ; i<= n ; i++) { 
	   if(deg[i] % 2 == 0) { 
	    ++cnt ; 
	   }
	 } 
	 if(cnt == n) { 
	   cout << "YES" << endl ; 
	 } 
	 else cout << "NO" << endl ; 
   }
}
