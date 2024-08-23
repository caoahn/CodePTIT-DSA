#include<bits/stdc++.h> 
using namespace std ;
int n,m ; 
int p[100005] ; 
vector<int> adj[1001] ;  
int sz[100005] ; 
int res = 0 ; 
void makeset() { 
   for(int i=1 ; i<= n ; i++) { 
      p[i] = i ; 
      sz[i] = 1 ; 
   }
} 
int find(int v){
	if(v == p[v]) { 
	  return v ; 
	} 
	return p[v] = find(p[v]) ; 
} 
void Union(int a,int b) { 
   a = find(a)  ; 
   b = find(b) ; 
   if(a != b) { 
      if(sz[a] < sz[b]) swap(a,b) ; 
      p[b] = a; 
      sz[a] += sz[b] ; 
      res  = max(res,sz[a]) ; 
   }
}
int main() { 
   int t ; 
   cin >> t; 
   while(t--) { 
       cin >> n >> m ; 
       makeset() ; 
       res = 0 ; 
       for(int i=0 ; i< m ; i++) { 
           int x,y ;
           cin >> x >> y ; 
           Union(x,y) ; 
	   } 
	   cout << res << endl ; 
	   	memset(p,0,sizeof(p)) ; 
    	memset(sz,0,sizeof(sz)) ;  
   }
} 
