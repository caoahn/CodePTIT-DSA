#include<bits/stdc++.h>
using namespace std ;
int main() { 
      int t ; 
      cin >> t; 
      while(t--) { 
          int n ;
          cin >> n ; 
          int a[n] ; 
          int b[n] ; 
          for(int i=0; i < n ; i++) { 
              cin >> a[i] ; 
              b[i] = a[i] ; 
          }  
          stack<int> st ;  
          int res  ;  
          vector<int> v1 ; 
          for(int i = n-1 ; i>=0 ; i--) { 
                while(!st.empty() && a[i] >= st.top()) { 
                      st.pop() ; 
                } 
                if(st.empty()) v1.push_back(-1) ; 
                else { 
                      int x = st.top() ; 
                      int j ;  
                      for(int k = 0 ; k < n ; k++) { 
                          if(a[k] == x) { 
                              j = k ; 
                              break ; 
                          }
                      }
                       while(1) {  
                           if(b[j] < x) { 
                              res = b[j] ; 
                              break ; 
                           }
                           if(j == n) break ;
                           ++j ;   
                       }
                if(j == n) v1.push_back(-1) ; 
                else v1.push_back(res) ; 
                } 
                st.push(a[i]) ; 
          } 
          for(int i=v1.size()-1; i >= 0; i--) {  
            cout << v1[i] << ' ' ; 
         } 
       cout << endl ; 
      }
}