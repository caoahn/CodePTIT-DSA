#include<bits/stdc++.h> 
using namespace std ; 
int n, m  ; 
vector<int> adj[1001] ; 
bool visited[1001] ; 
int ok ;  
void dfs(int u,int cnt) { 
   if(cnt == n) ok = 1 ; 
    if(ok) return ;   
   visited[u] = true  ; 
   for(auto v : adj[u]) { 
     if(!visited[v]) { 
         visited[v] = true;  
         dfs(v,cnt+1) ; 
         visited[v] = false; 
	 }
   } 
} 
void testcase() { 
   ok = 0 ; 
   for(int i=0 ; i<=999 ; i++) { 
     adj[i].clear() ; 
	} 
	 memset(visited,false,sizeof(visited)) ; 
	cin >> n >> m ; 
	for(int i=0; i < m ; i++) { 
	  int x, y ; 
	  cin >> x >> y ; 
	  adj[x].push_back(y) ; 
	  adj[y].push_back(x) ; 
	} 
	for(int i=1 ; i<= n ; i++) { 
	   memset(visited,false,sizeof(visited)) ;  
	   dfs(i,1) ; 
	   if(ok) break ; 
	} 
	cout << ok << endl ; 
}
int main() { 
   int t ;
   cin >> t; 
   while(t--) { 
      testcase() ;
   }
}
