#include<bits/stdc++.h> 
using namespace std ;  
vector<int> adj[1001] ; 
bool visited[1001] ; 
int p[1001] ; 
void dfs(int u) { 
   visited[u] = true ; 
   for(auto v : adj[u]) { 
        if(!visited[v]) { 
            p[v] = u ; 
            dfs(v) ; 
		}
   }
} 
void bfs(int u) { 
   queue<int> q ; 
   visited[u] = true ; 
   q.push(u) ; 
   while(!q.empty()) { 
     int v = q.front() ; 
     q.pop() ; 
     for(auto x : adj[v]) { 
       if(!visited[x]) {  
           visited[x] = true ; 
           p[x] = v ; 
           q.push(x) ; 
	   }
	 }
   }
}
int main() { 
   int t; 
   cin >> t; 
   while(t--) { 
      int n,m,c1,c2; 
      cin >> n >> m >> c1 >> c2 ;  
      for(int i=0; i <= 1000 ; i++) { 
          visited[i] = false;  
          p[i] = 0 ; 
          adj[i].clear() ; 
	  }
      for(int  i=0; i<m;i++) {  
         int x,y ; 
         cin >> x >> y ; 
         adj[x].push_back(y) ; 
	  } 
      bfs(c1) ; 
      if(!visited[c2]) { 
         cout <<"-1" << endl ; 
	  } 
	  else { 
	      vector<int> res ; 
	      while(c2 != c1) { 
	         res.push_back(c2) ; 
	         c2 = p[c2] ; 
		  } 
		  res.push_back(c1) ; 
		  for(int i=res.size()-1 ; i >= 0 ; i--) { 
		      cout << res[i] <<' ' ; 
		  } 
		  cout << endl ; 
	  }
   }
}
