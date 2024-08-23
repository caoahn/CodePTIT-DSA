#include<bits/stdc++.h>
using namespace std ; 
int main() { 
      int t ; 
      cin >> t;
      while(t--) { 
          string s ; 
          cin >> s; 
          stack<int> st; 
          int n  = s.size() ;  
          int res = 0 ; 
          st.push(-1)  ; 
          for(int i=0 ; i<n ; i++) { 
               if(s[i] == '(') { 
                   st.push(i) ; 
               } 
               else { 
                   st.pop() ; 
                   if(st.size() > 0) { 
                       res = max(res,i - st.top()) ; 
                   } 
                   if(st.empty()) st.push(i) ; 
               }
          } 
          cout << res << endl ; 
      }
}