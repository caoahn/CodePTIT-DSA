#include<bits/stdc++.h>
using namespace std;  
void check(string s)  { 
      stack<char> st ; 
      int cnt = 0 ; 
      for(int i = 0 ; i < s.size() ; i++) {  
           if(s[i] == '(') { 
              st.push(s[i]) ; 
           } 
           else { 
              if(st.empty()) { 
                  st.push('(') ; 
                  ++cnt ;   
              } 
              else if(st.top() == '(') {  
                  st.pop()  ; 
              }
           }
      } 
      cout << cnt + st.size()/2 << endl ; 
}
int main() { 
      int t ; 
      cin >> t  ; 
      while(t--) { 
          string s ; 
          cin >> s ; 
          check(s) ; 
      }
}