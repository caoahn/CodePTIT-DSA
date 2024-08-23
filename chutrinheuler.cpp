#include<bits/stdc++.h> 
using namespace std ; 
int n, m  ; 
set<int> adj[1001] ; 
int deg[1001] ; 
void nhap() { 
       cin >> n >> m ; 
       for(int i=0;i < m ; i++) { 
           int x,y ; 
           cin >> x >> y ; 
           adj[x].insert(x) ; 
           adj[y].insert(x)  ; 
           deg[x]++ ; 
           deg[y]++ ; 
       }
} 
void euler(int v) { 
      stack<int> st ; 
      vector<int> ec ; 
      st.push(v) ;  
      while(!st.empty()) { 
            int x = st.top() ; 
            if(adj[x].size() != 0) {  
                 int y = *adj[x].begin() ; 
                 st.push(y) ;   
                 // xoa x y 
                 adj[x].erase(y) ; 
                 adj[y].erase(x) ; 
            } 
            else { 
                  st.pop() ; 
                  ec.push_back(x) ; 
            }
      } 
      reverse(begin(ec),end(ec)) ; 
      for(int x : ec) { 
          cout << x << ' ' ; 
      }
}
int main() {  
       nhap() ; 
       euler(1) ; 
}