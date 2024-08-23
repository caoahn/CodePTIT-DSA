#include<bits/stdc++.h> 
using namespace std ;
struct A { 
   int x,y,step ; 
}; 
int main() { 
   int t ;
   cin >> t; 
   while(t--) { 
      int n,m ; 
      cin >> n >> m; 
      int a[n+1][m+1] ; 
      for(int i=1 ;i <= n ; i++) { 
        for(int j=1 ; j<= m ; j++) { 
           cin >> a[i][j] ; 
		}
	  } 
	  queue<A> q ; 
	  q.push({1,1,0}) ; 
	  int ans = -1 ; 
	  while(q.size()) { 
	     A g = q.front() ; 
	     q.pop() ; 
	     if(g.x == n && g.y == m) { 
	       ans = g.step ; 
	       break ; 
		 } 
		 if(a[g.x][g.y] == 0) continue ; 
		 
		 int x0 = g.x + a[g.x][g.y] ; 
		 int y0 = g.y + a[g.x][g.y] ; 
		 if(y0 <= m) { 
		    q.push({g.x,y0,g.step+1}) ; 
		 } 
		 if(x0 <= n) { 
		    q.push({x0, g.y, g.step + 1}) ; 
 		 }  
 		 a[g.x][g.y] = 0 ; 
	  } 
	  cout << ans << endl ; 
   }
}
