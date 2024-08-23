#include<bits/stdc++.h> 
using namespace std ; 
vector<int> adj[1001]  ; 
bool visited[1001] ; 
int n, m , u ;  
void dfs(int u) { 
   visited[u] = true  ; 
   cout << u <<" " ; 
   for(auto v : adj[u]) { 
      if(!visited[v]) { 
         dfs(v) ; 
	  }
   }
} 
void bfs(int u) { 
   queue<int> q ; 
   visited[u] = true ; 
   q.push(u) ; 
   while(!q.empty()) {  
     int x = q.front() ; 
     q.pop() ; 
     cout << x << " "  ;
     for(int v : adj[x]) { 
        if(!visited[v]) { 
              cout << v <<" " ; 
              q.push(v) ; 
              visited[v] = true ; 
		}
	 }
   }
}
int main() { 
   int t ;
   cin >> t ;
   while(t--) { 
       cin >> n >> m >> u ;  
       for(int i=0; i <= 999 ; i++) { 
         adj[i].clear() ; 
	   } 
	   memset(visited,false,sizeof(visited)) ; 
       for(int i=0; i < m ; i++)  {   
          int x,y ;
          cin >> x >> y; 
          adj[x].push_back(y) ; 
          adj[y].push_back(x) ; 
	   } 
	   bfs(u) ; 
	   cout << endl ; 
   }
}
