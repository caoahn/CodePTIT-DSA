#include<bits/stdc++.h> 
using namespace std ; 
vector<int> adj[100005] ; 
bool visited[1001] ; 
int main() { 
    int t ;
    cin >> t; 
    while(t--) {  
        for(int i=0; i <= 999 ; i++) { 
          adj[i].clear() ; 
		}
        int v,e ; 
        cin >> v >> e;  
        for(int i=0; i < e ; i ++) { 
		    int x, y ; 
			cin >> x >> y ;  
           adj[x].push_back(y) ; 
           adj[y].push_back(x) ; 
		} 
		int ok = 1 ; 
		for(int i=1; i <= v ; i++)  { 
		   for(int j : adj[i]) { 
		     if(adj[j].size() != adj[i].size()) { 
		        ok = 0 ; 
		        break ; 
			 }
		   }
		} 
		if(ok) cout << "YES" << endl ; 
		else cout << "NO" << endl ; 
	}
}
