#include<bits/stdc++.h> 
using namespace std ; 
int n ; 
int a[100005] ; 
int solve(int u) { 
       if(u == a[u]) return u ; 
       else return a[u] = solve(a[u]) ; 
} 
int main() { 
  cin >> n ; 
  for(int i=1 ; i<= 100000 ; i++) { 
      a[i] = i ; 
  } 
  for(int i=1 ; i<=n ; i++) { 
       int u,v ; 
       cin >> u >> v ; 
       int c ; 
       u = solve(u) ; 
       v = solve(v) ; 
       cin >> c ; 
       if(c == 1) { 
           if(u != v) a[v] = u ; 
	   } 
	   if(c == 2) { 
	      if(u == v) cout <<"1" << endl ; 
	      else cout <<"0" << endl ; 
	   }
  }
}
