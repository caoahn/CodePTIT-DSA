#include<bits/stdc++.h>
using namespace std; 
vector<int> adj[100001] ; 
int main() { 
     int t ; 
     cin >> t ; 
     while(t--) { 
          int n,m ;  
          cin >> n >> m ;  
          for(int i=0; i < m ; i++) {  
               int x,y  ; 
               cin >> x >> y ; 
               adj[x].push_back(y) ; 
               adj[y].push_back(x) ; 
          } 
          for(int i=0; i < n  ;i++) { 
            cout <<i+1<<":" <<" " ; 
            for(auto x : adj[i+1]) { 
              cout << x <<" " ; 
			} 
			cout << endl ; 
		  }  
            memset(adj,0,sizeof(adj)) ; 
     }
}
