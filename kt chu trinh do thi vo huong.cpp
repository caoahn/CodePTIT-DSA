#include<bits/stdc++.h> 
using namespace std ; 
vector<int> adj[1001] ; 
bool visited[1001] ;   
int size[1001] ; 
int p[1001] ; 
 int n,m ; 
void make_set() { 
    for(int i=1 ; i <= n ; i++) { 
        p[i] = i ;  
		size[i] = 1;   
	}
} 
int find(int v) { 
      if(v == p[v]) { 
         return v ; 
	  } 
	return p[v] = find(p[v]) ; 
}
bool Union(int a,int b) { 
     a = find(a) ; 
     b = find(b) ; 
     if(a == b) { 
       return false; 
	 } 
	   if(size[a] < size[b] ) swap(a,b) ; 
	   p[b] = a;  
	   size[a] += size[b] ;   
	   return true  ; 
}
int main() { 
    int t ;
    cin >> t; 
    while(t--) { 
         cin >> n >> m ;  
         bool ok = false ;  
         make_set() ; 
         for(int i=1 ;i <= m ; i++) { 
              int x, y ;
               cin >> x >> y ; 
               if(!Union(x,y)) { 
                  ok =true  ; 
			   }
		 }
		 if(ok) cout << "YES" << endl ; 
		 else cout <<"NO" << endl ;  
		 memset(size,0,sizeof(size)) ;  
		 memset(p,0,sizeof(p)) ; 
	}
}
