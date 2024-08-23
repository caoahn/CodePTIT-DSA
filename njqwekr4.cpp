#include<bits/stdc++.h> 
using namespace std ; 
int n,m ; 
vector<int> adj[1001] ; 
bool visited[1001] ;   
vector<pair<int,int>> p;
void dfs(int u) { 
   visited[u] = true ; 
   for(auto v : adj[u]) { 
      if(!visited[v]) { 
         dfs(v) ; 
	  }
   }
}

void dfs2(int u,int s, int t) { 
      visited[u] = true ;  
      for(auto v : adj[u]) { 
          if(!visited[v]) {  
            if(v == s && u == t || v == t && u == s) continue ; 
            dfs2(v,s,t) ; 
	  }
	  }
}
int main() { 
  int t ;
  cin >> t; 
  while(t--) {  
      for(int i=0 ; i<= 999 ; i++) { 
         adj[i].clear() ; 
         visited[i] = false; 
	  } 
	  p.clear() ; 
      cin >> n >> m ; 
      for(int i=0; i < m ; i++) { 
          int x,y ; 
          cin >> x >> y ; 
          adj[x].push_back(y) ; 
          adj[y].push_back(x) ;  
          p.push_back({min(x,y), max(x,y)}) ; 
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
	     int d1 = x.first ; 
	     int d2 = x.second ; 
	      memset(visited,false,sizeof(visited)) ;  
	      int tplt2 = 0 ; 
	     for(int i=1 ; i<= n ; i++) { 
	        if(!visited[i]) { 
	         ++tplt2 ; 
	           dfs2(i,d1,d2) ; 
			}
		 } 
		 if(tplt2 > tplt) { 
		   cout << d1 <<" " << d2 <<" " ; 
		 }
	  } 
	  cout << endl ; 
  }
}
