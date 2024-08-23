#include<bits/stdc++.h> 
using namespace std;  
vector<int> adj[1001] ; 
int p[1001] ;  
bool visited[1001] ; 
void dfs(int u) { 
   visited[u] = true ; 
   for(int v : adj[u]) { 
      if(!visited[v]) { 
	      p[v] = u ;  
          dfs(v) ; 
	  }
   }
} 
bool visited2[1001] ; 
int p2[1001] ; 
void bfs(int u) { 
    queue<int> q ; 
    q.push(u) ; 
    visited2[u] = true ; 
    while(!q.empty()) { 
       int v = q.front() ; 
       q.pop() ; 
       for(int x : adj[v]) { 
           if(!visited2[x]) { 
              p2[x] = v ; 
              q.push(x) ; 
              visited2[x] = true ; 
		   }
	   }
	}
}
int n, m ;  
int main() { 
   cin >> n >> m ; 
   for(int i = 0 ; i < m ; i++) { 
       int x,y ; 
       cin >> x >> y ; 
       adj[x].push_back(y) ; 
       adj[y].push_back(x) ; 
   }
   memset(visited,false,sizeof(visited)) ; 
   memset(visited2,false,sizeof(visited2)) ;  
   memset(p,0,sizeof(p)) ; 
   memset(p2,0,sizeof(p2)) ; 
   vector<int> v ; 
   for(int it : adj[1]) { 
     v.push_back(it) ; 
   } 
   dfs(1) ; 
   bfs(1) ; 
   for(int i=0; i < v.size() ; i++) { 
         // dfs
        if(!visited[v[i]]) { 
            cout << "-1" << endl ; 
		} 
		else { 
		  vector<int> res ; 
		  while(v[i] != 1) { 
		    res.push_back(v[i]) ;  
		    v[i] = p[v[i]] ; 
		  } 
		  res.push_back(1) ; 
		  for(int j=res.size()-1 ; j >=0 ; j--) { 
		     cout << res[j] <<" " ; 
		} 
		  cout << endl ; 
		
		    vector<int> res2 ; 
		   while(v[i] != 1) { 
		       res2.push_back(v[i]) ; 
		       v[i] = p2[v[i]] ; 
		   } 
		   res2.push_back(1) ; 
		   for(int j = res2.size()-1  ; j >= 0 ; j--) { 
		      cout << res2[j] << " " ; 
		   }  
		  cout << endl ; 
		} 
		
		// bfs 
//		if(!visited2[v[i]]) { 
//		  cout << "-1" << endl ; 
//		} 
//		else { 
//		   vector<int> res2 ; 
//		   while(v[i] != 1) { 
//		       res2.push_back(v[i]) ; 
//		       v[i] = p2[v[i]] ; 
//		   } 
//		   res2.push_back(1) ; 
//		   for(int j = res2.size()-1  ; j >= 0 ; j--) { 
//		      cout << res2[j] << " " ; 
//		   } 
//		   cout << endl ; 
//		}
   }
}
