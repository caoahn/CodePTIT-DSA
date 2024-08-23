#include<bits/stdc++.h> 
using namespace std; 
int main() { 
      int t; 
      cin >> t; 
      while(t--) { 
           int n;
           cin >> n ; 
           int a[n] ;  
           vector<int> v1 ; 
           int b[n] ; 
           for(int i=0; i < n ; i++) { 
             cin >> a[i]  ; 
             b[i] = a[i] ;  
           }  
           stack<int> st ;  
           int res = 1e9+1 ; 
           for(int i=n-1 ; i>= 0 ; i--) {  
               while(!st.empty() && a[i] >= st.top()) { 
                  st.pop()  ; 
               } 
               if(st.empty()) v1.push_back(-1) ; 
               else  { 

                    int x = st.top() ; 
                    int j = n-1 ; 
                    while(1) { 
                          if(b[j] == x) break ; 
                          res = min(b[j],res) ; 
                          --j ; 
                    }  
                    if(j == n-1) { 
                          v1.push_back(-1) ; 
                    } 
                    else  v1.push_back(res) ; 
                    res = 1e9+1 ;  
               } 
               st.push(a[i]) ; 
           }
           for(int i=0 ; i < v1.size() ; i++) { 
              cout << v1[i] <<' ' ; 
           } 
           cout << endl ; 
      }
}