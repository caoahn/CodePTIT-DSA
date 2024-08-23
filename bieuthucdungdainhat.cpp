#include<bits/stdc++.h> 
using namespace std ;
int main() { 
      int t ; 
      cin >> t; 
      while(t--) { 
          string s ;
          cin >> s; 
          stack<int> st ; 
          int res = 0 ; 
          for(int i=0; i < s.size() ; i++) { 
               if(s[i] == '(') { 
                  st.push(s[i]) ; 
               }
               else { 
                  if(!st.empty()) { 
                    st.pop() ; 
                    res += 2 ; 
                  }
               }
          } 
          cout << res << endl ; 
      }
} 
