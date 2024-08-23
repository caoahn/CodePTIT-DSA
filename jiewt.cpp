#include<bits/stdc++.h> 
using namespace std; 
int m,n ; 
vector<int> adj[1001] ;  
int p[1001] ; 
int sz[1001] ; 
void makeset() { 
  for(int i=1 ; i<= n ; i++) { 
     p[i] = i ; 
     sz[i] = 1; 
  }
} 
int find(int v) { 
  if(v == p[v]) { 
    return v ; 
  } 
  return p[v] = find(p[v]) ; 
} 
bool Union(int a,int b) { 
   a= find(a) ; 
   b = find(b) ; 
   if(a == b) { 
     return false ; 
   } 
      if(sz[a] < sz[b]) swap(a,b) ; 
      p[b] = a ; 
      sz[a] += sz[b] ; 
   return true ; 
}
int main() { 
   int t ;
   cin >> t; 
   while(t--) { 
       cin >> n >> m ;  
       int ok = 0 ;  
       makeset() ; 
       for(int i=0;i<m;i++) { 
         int x, y ; 
         cin >> x >> y ; 
         if(!Union(x,y)) { 
           ok = 1 ;
		 }
	   } 
	   if(ok) cout << "YES" << endl ; 
	   else cout <<"NO" << endl ;  
   }
}
