#include<bits/stdc++.h> 
using namespace std ;
int n,m , s; 
vector<pair<int,int>> adj[1005] ; 
void dijikstra(int s)  {  
    // mang luu kc duong di
    vector<long long> d(n+1,1e9) ; 
    d[s] = 0 ; 
    priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>> > Q ; 
    // {khoang cach, dinh}
    Q.push({0,s}) ; 
    while(!Q.empty()) {  
        // chon ra dinh co kc tu s nho nhat
        pair<int,int> top = Q.top() ; 
        Q.pop() ; 
        int u  = top.second;  
        int kc = top.first ; 
        if(kc > d[u]) continue ; 
        for(auto it : adj[u]) { 
            int v = it.first ; 
             int w = it.second ;  
             if(d[v] > d[u] + w) {  
                 d[v] = d[u] + w;
                 Q.push({d[v],v}) ; 
			 }
		}	
 	} 
 	for(int i = 1; i<= n ; i++)  { 
 	      cout << d[i] <<' ' ;
	 } 
	 cout << endl ; 
} 
int main() { 
int t ;
cin >> t; 
while(t--) { 
      cin >> n >> m >> s;  
    for(int i=0; i < m ; i++) { 
        int x,y,w ; 
		cin >> x >> y >> w ;
		adj[x].push_back({y,w}) ;  
		adj[y].push_back({x,w}) ;       
	}
    dijikstra(s) ;   
    	memset(adj, 0, sizeof(adj));   
}

}
