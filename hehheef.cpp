#include<bits/stdc++.h> 
using namespace std;  
vector<int> adj[1001] ; 
bool visited[1001] ;  
int a[1001][1001] ; 
int n,m ; 
void inp() { 
    cin >> n ;  
    for(int i=1; i<= n ; i++) { 
      for(int j=1 ; j<=n ; j++) { 
          cin >> a[i][j] ; 
          if(a[i][j] == 1) { 
              adj[i].push_back(j) ; 
              adj[j].push_back(i)  ; 
		  }
	  }
	}
}
void dfs(int u) { 
      visited[u] = true ; 
      for(auto v : adj[u]) {  
          if(!visited[v]) { 
               dfs(v) ; 
          }
      }
}
int main() { 
 
           inp() ; 
           int tplt = 0 ; 
          memset(visited,false,sizeof(visited)) ; 
          for(int i=1 ; i<= n ; i++) { 
              if(!visited[i]) { 
                 dfs(i) ;
                 ++tplt; 
              }
          } 
         cout << tplt<< endl ; 
       
}
