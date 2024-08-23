#include<bits/stdc++.h> 
using namespace std ;
int n,m,c1,c2; 
vector<int> adj[1005] ;  
bool visited[1005] ;  
int p[1005] ; 
vector<int> v1 ;  
int a[1001][1001] ; 
void dfs(int u) { 
      visited[u] = true ; 
      for(auto v : adj[u]) { 
              if(!visited[v]) {  
                  p[v] = u ; 
                  dfs(v); 
              }
      }
}
void inp() { 
      cin >> n >> c1 >> c2 ; 
      for( int i = 1 ; i<= n ; i++) { 
          for(int j=1 ; j <= n ; j++) {  
               cin >> a[i][j] ; 
               if(a[i][j] == 1) { 
                   adj[i].push_back(j) ;  
                   adj[j].push_back(i)  ;
               }
          }
      }
} 
int main() { 
       inp() ; 
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
           cout << endl ;
}
