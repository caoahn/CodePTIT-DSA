#include<bits/stdc++.h> 
using namespace std ;  
struct edge { 
   int u,v ; 
   int w ; 
}; 
int n,m ; 
int p[1001] ; 
int sz[1001] ; 
vector<edge> canh ; 
void inp() {  
    cin >> n >> m ; 
   for(int i=0; i < m ; i++)  { 
      int x,y,w ; 
      cin >> x >> y >> w ; 
      edge e ; 
      e.u = x ; 
      e.v = y ; 
      e.w = w ; 
      canh.push_back(e) ; 
   }
}
void makeset() { 
   for(int i=1 ; i<= n; i++) { 
      p[i] = i ; 
      sz[i] = 1 ; 
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
    if(a == b) return false; 
    if(sz[a] < sz[b]) swap(a,b) ; 
    p[b] = a ; 
    sz[a] += sz[b] ; 
    return true  ; 
} 
bool cmp(edge a, edge b) { 
  return a.w < b.w ; 
} 
void Kruskal () { 
    vector<edge> mst ; 
    int d = 0 ; 
    sort(canh.begin(),canh.end(),cmp) ; 
    for(int i=0; i < m ; i++) { 
        if(mst.size() == n-1) break ; 
        edge e = canh[i] ; 
        if(Union(e.u,e.v)) { 
          mst.push_back(e) ; 
		  d += e.w ;  
		}
	} 
	cout << d << endl ; 
}
int main() { 
    inp() ; 
    makeset() ; 
    Kruskal() ; 
}
