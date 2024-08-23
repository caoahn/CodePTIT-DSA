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
void check() {  
      int cnt = 0 ;  
      int cnt2 = 0 ; 
       for(int i=1 ; i <= n ; i++) { 
              if(deg[i] % 2 == 0) { 
                    ++cnt ; 
              } 
              else { 
                   ++cnt2 ; 
              }
       } 
       if(cnt == n) { 
             cout <<2<< endl ;  
             return ; 
       }   
       if(cnt2 == 2) { 
              cout <<1 << endl ;  
              return ; 
       }
       cout <<0 << endl ; 
       return ; 
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
      int t ; 
      cin >> t; 
      while(t--) { 
            for(int i=0; i <=n; i++) { 
                    adj[i].clear() ; 
                    deg[i] = 0 ; 
            }
               nhap() ; 
               check() ; 

      }
}