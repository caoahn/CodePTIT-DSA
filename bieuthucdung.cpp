#include<bits/stdc++.h> 
using namespace std ; 
int main() { 
      int t ; 
      cin >> t; 
      while(t--) { 
           string s ; 
           cin >> s;  
           stack<char> st ; 
           int xoa = 0 ; 
           int res = 0 ; 
           for(int i=0; i < s.size() ; i++) { 
               if(st.size() == 0) { 
                  st.push(s[i]) ; 
               } 
               else if(st.top() == '[' && s[i] == ']' ) { 
                    st.pop() ; 
                    xoa += 2 ; 
               } 
               else if(st.top() == ']' && s[i] == '[') { 
                   res += st.size() + xoa  ; 
                   st.pop() ; 
               } 
               else if(s[i] == '[') { 
                   st.push(s[i]) ; 
               } 
               else if(st.top() == ']' && s[i] == ']') { 
                   st.push(s[i]) ; 
               } 
               if(st.size() == 0) xoa = 0 ;
           } 
           cout << res << endl ; 
      }
}