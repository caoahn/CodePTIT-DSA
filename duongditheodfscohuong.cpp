#include<bits/stdc++.h> 
using namespace std ;
int n,m,c1,c2; 
vector<int> adj[1005] ;  
bool visited[1005] ;  
int p[1005] ; 
vector<int> v1 ; 
void dfs(int u) { 
      visited[u] = true ; 
      for(auto v : adj[u]) { 
              if(!visited[v]) {  
                  p[v] = u ; 
                  dfs(v); 
              }
      }
}
void bfs(int u) { 
         queue<int> q ; 
         q.push(u) ; 
         visited[u] = true ; 
         while(!q.empty()) { 
               int v=q.front() ; 
               q.pop() ; 
               for(auto x : adj[v]) { 
                     if(!visited[x]) { 
                          q.push(x) ;  
                          visited[x] = true ; 
                          p[x] = v ; 
               }
         }
      } 
}
int main() { 
           cin >> n >> m  ; 
            memset(p,0,sizeof(p)) ; 
            memset(visited,false,sizeof(false)) ; 
            memset(adj,0,sizeof(adj)) ; 
            vector<string> v1 ; 
            vector<string> v2 ; 
           for(int i=0; i < m ; i++) { 
              int x,y ; 
              cin >> x >> y ; 
              adj[x].push_back(y) ; 
               adj[y].push_back(x) ; 
           } 
		   vector<int> v ; 
	       for( int x : adj[1]) { 
	           v.push_back(x) ; 
        	}    
//           int c1 = 1 ; 
//           dfs(1) ; 
//           	for(int i=0 ; i < v.size() ; i++) {     
//		        if(!visited[v[i]]) { 
//		                 v1.push_back("-1") ; 
//		           } 
//		 else { 
//		    vector<int> res ;  
//		    string s1 ="" ; 
//		    while(v[i] != c1) { 
//		       res.push_back(v[i]) ; 
//		       v[i] = p[v[i]] ; 
//			} 
//			res.push_back(1) ; 
//			for(int j=res.size()-1 ; j >= 0 ; j--) {  
//			 s1 += to_string(res[j]); 
//			 s1 += " " ;  
//			} 
//			s1.pop_back() ; 
//			v1.push_back(s1) ;  
//		 } 
//	} 
//	 for(int i=0; i < v1.size() ; i++)  { 
//	   cout << v1[i] << endl ; 
//	 }
		 // bfs  
		   c1 = 1 ; 
		    memset(p,0,sizeof(p)) ; 
            memset(visited,false,sizeof(false)) ; 
        for(int i=0 ; i < v.size() ; i++)  { 
           memset(p,0,sizeof(p)) ; 
            memset(visited,false,sizeof(false)) ; 
            bfs(v[i]) ; 
            if(!visited[c1]) { 
              cout << "-1" << endl ; 
			} 
			else { 
			   vector<int> res2 ; 
			   while(c1 != v[i]) { 
			      res2.push_back(c1) ; 
			      c1 = p[c1] ; 
			   } 
			   res2.push_back(v[i]) ; 
			   for(int j=res2.size() - 1 ; j >= 0 ; j--) {  
			      cout << res2[j] <<" " ; 
			   } 
			   cout << endl ; 
			}
		}  	 
	}   


